#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * main - entry point
 * @ac: Argument count
 * @av: Argument vector
 * Return: 0 on success
*/

int main(int ac, char **av)
{
	int filefrom_fd, fileto_fd, written, closed1, closed2, read_bytes;
	char buffer[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	filefrom_fd = open(av[1], O_RDONLY);
	if (filefrom_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fileto_fd = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	while ((read_bytes = read(filefrom_fd, buffer, sizeof(buffer))) > 0)
	{
		written = write(fileto_fd, buffer, read_bytes);
		if (written == -1 || written != read_bytes)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}
	closed1 = close(filefrom_fd);
	if (closed1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close %i\n", filefrom_fd);
		exit(100);
	}
	closed2 = close(fileto_fd);
	if (closed2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close %i\n", fileto_fd);
		exit(100);
	}
	return (0);
}

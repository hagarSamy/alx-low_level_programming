#include "main.h"
#include <fcntl.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: The name of the file to read
 * @letters: The number of letters to read
 * Return: the actual number of letters it could read and print
 * 0 if filename is NULL or if file cannot be opened or read
 * or if write fails
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t read_chars, written;
	char *buffer;

	if (filename == NULL)
	return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	read_chars = read(fd, buffer, letters);
	if (read_chars == -1)
	{
		free(buffer);
		return (0);
	}
	written = write(STDOUT_FILENO, buffer, read_chars);
	if (written == -1 || written != read_chars)
	{
		free(buffer);
		return (0);
	}
	close(fd);
	return (written);
}

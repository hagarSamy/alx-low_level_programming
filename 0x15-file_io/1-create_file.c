#include "main.h"
#include <fcntl.h>
/**
 * create_file - creates a file with the given text
 * @filename: The name of the file
 * @text_content: The text to write to the file
 * Return: 1 if the file was created successfully,
 * -1 if the file could not be created
 * -1 if filename is NULL or if write fails
*/

int create_file(const char *filename, char *text_content)
{
	int fd, len = 0;
	ssize_t written;

	if (filename == NULL)
	return (-1);
	fd = open(filename, O_TRUNC | O_WRONLY | 0600);
	if (fd == -1)
	return (-1);
	while (text_content[len])
    {
        len++;
    }
	if (text_content)
	{
		written = write(fd, text_content, len);
		if (written == -1 && written != len)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}

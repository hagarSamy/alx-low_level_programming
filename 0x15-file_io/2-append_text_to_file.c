#include "main.h"
#include <fcntl.h>
/**
 * append_text_to_file - appends a text to an existing file
 * @filename: The name of the file
 * @text_content: The text to append to the file
 * Return: 1 if the file was apended successfully,
 * -1 on failure
 * -1 if filename is NULL or if write fails
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, closed, len = 0, written = -1;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[len])
		{
			len++;
		}
		written = write(fd, text_content, len);
		if (written == -1 || written != len)
			return (-1);
	}
	closed = close(fd);
	if (closed == -1)
		return (-1);

	return (1);
}

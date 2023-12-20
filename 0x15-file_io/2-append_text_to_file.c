#include "main.h"

/**
 * append_text_to_file - function that appends text to
 * the end of a file
 * @filename: name of file
 * @text_content: content to append to the file
 * 
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int bytes = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);
	bytes = write(fd, text_content, strlen(text_content));
	if (bytes == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}


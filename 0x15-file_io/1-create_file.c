#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: name of file to create
 * @text_content: pointer to the content of text
 *
 * Return: 1 on Success and -1 on failure
 */
int create_file(const char * filename, char *text_content)
{
	int fd;
	int bytes_write = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return(-1);
	bytes_write = write(fd, text_content, strlen(text_content));
	if (bytes_write <= 0)
	{
		close(fd);
		return (-1);
	}
	close (fd);
	return (1);
}


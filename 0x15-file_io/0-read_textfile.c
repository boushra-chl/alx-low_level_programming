#include "main.h"

/**
 * read_textfile - function that reads a text file and
 * prints to the POSIX standard outpout
 * @filename: pointer to the name of the file
 * @letters: number of letters to read
 *
 * Return: number of letters or 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes_r = 0, bytes_w = 0;
	char *buf;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		free(buf);
		return (0);
	}
	bytes_r = read(fd, buf, letters);
	bytes_w = write(1, buf, bytes_r);
	if (bytes_r != bytes_w || bytes_r == -1 || bytes_w == -1)
	{
		close(fd);
		return (0);
	}
	close(fd);
	return (bytes_w);
}

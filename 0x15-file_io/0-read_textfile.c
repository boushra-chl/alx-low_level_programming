#include "main.h"
#include <unistd.h>
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
	int fd = open(filename, O_RDONLY);
	ssize_t bytes_read = 0, bytes_write = 0;
	char buf[1024];

	if (filename == NULL)
		return (0);
	else if (fd == -1)
		return (0);
	else
	{
		bytes_read = read(fd, buf, letters);
		bytes_write = write(1, buf, bytes_read);
		if (bytes_read != bytes_write)
			return (0);
		return (bytes_write);
	}
	close(fd);
}

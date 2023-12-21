#include "main.h"

/**
 * main - function that copies content from file to file
 * @file_from: file to copy from
 * @file_to: file to copy content to
 *
 * Return: 97, 98, 99 or 100
 */

int main(int argc, char **argv)
{
	int fd, fd2;
	char buffer[BUFFER_SIZE];
	int bytes_r = 0, bytes_w = 0;

	for (argc = 0; *argv; argc++);
	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(2, "Error opening %s\n", argv[1]);
		close(fd);
		exit(98);
	}
	fd2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd2 == -1)
	{
		dprintf(2, "Error opening file %s\n", argv[2]);
		close(fd2);
		exit(99);
	}
	while ((bytes_r = read(fd, buffer, BUFFER_SIZE)) > 0)
		bytes_w = write(fd2, buffer, bytes_r);
	if (bytes_r == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		close(fd);
		close(fd2);
		exit(98);
	}
	if (fd2 == -1 || bytes_w == -1)
	{
		dprintf(2, "Can't write to %s\n", argv[2]);
		close(fd);
		close(fd2);
		exit(99);
	}
	if (close(fd) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	if (close(fd2) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
	return(0);
}


#include "main.h"
/**
 * read_textfile - function that reads a text file and
 * prints it to the POSIX standard output
 * @filename: pointer to character
 * @letters: number of letters
 *
 * Return: number of letters or 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	char *printed;
	int r, w;

	if (filename == NULL || letters == 0)
		return (0);
	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);
	printed = malloc(sizeof(char) * letters);
	if (printed == NULL)
		return (0);
	r = read(fp, printed, letters);
	if (r < 0)
	{
		free(printed);
		return (0);
	}
	w = write(STDOUT_FILENO, printed, r);
	if (w < 0)
	{
		free(printed);
		return (0);
	}
	free(printed);
	close(fp);
	return (w);
}

#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: name of file
 * @text_content: content of file
 *
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int fp;
	int i = 0;
	int wr;

	if (filename == NULL)
		return (-1);
	fp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fp < 0)
		return (-1);
	if (text_content)
	{
		while (text_content[i])
			i++;
		wr = write(fp, text_content,i);
		if (wr != i)
			return (-1);
	}
	close (fp);
	return (1);
}

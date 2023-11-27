#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: name of file
 * @text_content: content to append
 *
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fp;
	int wr;
	int i = 0;

	if (!filename)
		return (-1);
	fp = open(filename, O_RDWR | O_APPEND);
	if (fp < 0)
		return (-1);
	if (text_content)
	{
		while (text_content[i])
			i++;
		wr = write(fp, text_content, i);
		if (i != wr)
			return (-1);
	}
	close(fp);
	return (1);
}

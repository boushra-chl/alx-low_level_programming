#include "lists.h"
#include <unistd.h>
/**
 * print_listint - function that prints elements of listint_t
 * without the use of printf
 * @h: pointer to head
 *
 * Return: number of elments
 */

size_t print_listint(const listint_t *h)
{
	size_t node = 0;
	if (h == NULL)
		node = 0;
	while (h != NULL)
	{
		_putchar(h->n + '0');
		_putchar('\n');
		h = h->next;
		node++;
	}
	return (node);
}

/**
 * * _putchar - writes the character c to stdout
 * * @c: The character to print
 * *
 * * Return: On success 1.
 * * On error, -1 is returned, and errno is set appropriately.
 * */
int _putchar(char c)
{
	return (write(1, &c, 1));
}


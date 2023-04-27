#include "lists.h"

/**
 * print_list - prints all the elements of the singly lists keys
 * @h: pointer to struct list_t to be printed
 *
 * Return: number of nodes printed
*/
size_t print_list(const list_t *h)
{
	size_t l = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		l++;
	}

	return (l);
}


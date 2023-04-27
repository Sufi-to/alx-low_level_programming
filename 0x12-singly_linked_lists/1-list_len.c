#include "lists.h"

/**
 * list_len - returns the number of elements in the linked list
 * @h: pointer to linked list
 *
 * Return: number of elements
*/
size_t list_len(const list_t *h)
{
	size_t l = 0;

	while (h)
	{
		l++;
		h = h->next;
	}
	return (l);
}


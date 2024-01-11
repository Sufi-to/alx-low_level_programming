#include "lists.h"

/**
 * print_dlistint - prints all the elements in dlistint_t list
 * @h: dlistint structure pointer to head
 * Return: number of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t len;

	len = 0;

	while (h != NULL)
	{

		printf("%d\n", h->n);
		h = h->next;
		len++;
	}
	return (len);
}

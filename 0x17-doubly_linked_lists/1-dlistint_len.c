#include "lists.h"

/**
 * dlistint_len - counts number of elements in the list
 * @h: pointer to the header of the linked list
 * Return: length of linked list
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);

}

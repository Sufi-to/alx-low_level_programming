#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes node at a given index
 * @head: double pointer to the head of the list
 * @index: index number of the element to be deleted
 * Return: 1 on success or -1 on failure
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *h;
	dlistint_t *n;
	unsigned int x;

	h = *head;

	if (h)
	{
		while (h->prev)
			h = h->prev;
	}
	x = 0;
	while (h)
	{
		if (x == index)
		{
			if (x == 0)
			{
				*head = h->next;
				if (*head)
					(*head)->prev = NULL;
			}
			else
			{
				n->next = h->next;
				if (h->next)
					h->next->prev = n;
			}
			free(h);
			return (1);
		}
		n = h;
		h = h->next;
		x++;
	}
	return (-1);
}

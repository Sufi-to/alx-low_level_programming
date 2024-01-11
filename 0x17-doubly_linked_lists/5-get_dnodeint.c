#include "lists.h"
/**
 * get_dnodeint_at_index - find the nth node of the doubly linked list
 * @head: pointer to the head of the list
 * @index: index of the node to be returned
 * Return: nth node it it succeeds else returns NULL
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int x;

	if (head)
	{
		while (head->prev)
			head = head->prev;
	}

	x = 0;
	while (head)
	{
		if (x == index)
			break;
		head = head->next;
		x++;
	}
	return (head);
}

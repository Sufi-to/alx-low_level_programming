#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts node at a given index
 * @h: double pointer to the head of the list
 * @idx: index of the list where the new node is inserted
 * @n: data of new node to be inserted
 * Return: address of new node or NULL if it fails
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *tmp;
	unsigned int x;


	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	tmp = *h;
	x = 0;
	if (idx == 0)
	{
		new->prev = NULL;
		new->next = tmp;
		if (tmp != NULL)
		{
			tmp->prev = new;
		}
		*h = new;
		return (new);
	}
	while (tmp != NULL)
	{
		if (x == idx - 1)
		{
			new->prev = tmp;
			new->next = tmp->next;
			if (tmp->next != NULL)
				tmp->next->prev = new;
			tmp->next = new;
			return (new);
		}
		x++;
		tmp = tmp->next;
	}
	return (NULL);
}

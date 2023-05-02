#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given link
 * @head: double pointer to the head of the linked list
 * @idx: index where the node is inserted
 * @n: data to be put in the new node
 * Return: address of new node or NULL if it failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *temp = *head;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);


	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		for (i = 0; i < idx - 1; i++)
		{
			if (temp->next == NULL)
			{
				return (NULL);
			}
			temp = temp->next;
		}
		new->next = temp->next;
		temp->next = new;
	}
	if (new)
		return (new);

	return (NULL);
}

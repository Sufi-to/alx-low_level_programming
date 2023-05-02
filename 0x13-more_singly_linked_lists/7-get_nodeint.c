#include "lists.h"

/**
 * git_nodeint_at_index - returns nth node of a listint_t lnked list
 * @head: pointer to the first node of the linked list
 * @index: index of the node to be returned
 * Return: pointer to the nth node or NULL if it doesn't exist
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int i = 0;

	while(temp && (i < index))
	{
		temp = temp->next;
		i++;
	}

	return (temp);
}

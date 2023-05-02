#include "lists.h"

/**
 * delete_nodeint_at_index - delete the node at a given index
 * @head: double pointer to the first node in the linked list
 * @index: index of the node to be deleted
 * Return: 1 is success or -1 if it failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	unsigned int i = 0;
	listint_t *currlist = NULL;

	if (!*head)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (i < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);

		temp = temp->next;
		i++;
	}
	currlist = temp->next;
	temp->next = currlist->next;
	free(currlist);

	return (1);
}

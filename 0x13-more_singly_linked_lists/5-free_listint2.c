#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and sets head to null
 * @head: double pointer to the linked list
 * Return: nothing
*/
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head == NULL)
		return;

	while (*head)
	{
		ptr = (*head)->next;
		free(*head);
		*head = ptr;
	}
	*head = NULL;
}

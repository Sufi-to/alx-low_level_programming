#include "lists.h"

/**
 * pop_listint - deletes the head node of a list_int_t linked list
 * @head: double pointer to the first node of the linked list
 * Return: the node's data or 0 if the linked list is empty
*/
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num = 0;

	if (*head == NULL)
		return (0);

	temp = *head;
	num = temp->n;
	*head = (*head)->next;
	free(temp);
	return (num);
}

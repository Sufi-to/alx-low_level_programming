#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: double pointer to the linked list
 * @n: new number to be added to the linked list
 * Return: address of the new element or null if it fails
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *update;
	listint_t *check = *head;

	update = malloc(sizeof(listint_t));
	if (update == NULL)
		return (NULL);

	update->n = n;
	if (*head == NULL)
	{
		*head = update;
		return (update);
	}

	while (check->next)
		check = check->next;

	check->next = update;

	return (update);
}

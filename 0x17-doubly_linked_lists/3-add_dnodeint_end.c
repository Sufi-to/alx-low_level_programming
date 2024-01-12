#include "lists.h"
/**
 * add_dnodeint_end - adds a node to the end of the list
 * @head: double pointer to the head of the list
 * @n: integer data for the new node to be added
 * Return: pointer to new element or NULL if failure
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *nl;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	nl = *head;
	if (nl != NULL)
	{
		while (nl->next != NULL)
			nl = nl->next;
		nl->next = new;
	}
	else
	{
		*head = new;
	}
	new->prev = nl;
	return (new);

}

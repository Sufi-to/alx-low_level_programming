#include "lists.h"

/**
 * add_dnodeint - adds a new add at the beginning of the list
 * @head: double pointer to the head of the list
 * @n: int data for the new node
 * Return: address of the new node
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *nl;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	nl = *head;
	if (nl != NULL)
	{
		while (nl->prev != NULL)
		nl = nl->prev;
	}
	new->next = nl;
	if (nl)
	{
		nl->prev = new;
	}
	*head = new;
	return (new);
}

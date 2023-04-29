#include "lists.h"

/**
 * add_nodeint - adds new node at the beginning of a a listint_t
 *
 * @head: double pointer to listint_t
 * @n: number to be added to the linked list
 * Return: address of the new element or null if it failed
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new =  malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = (*head);
	(*head) = new;
}

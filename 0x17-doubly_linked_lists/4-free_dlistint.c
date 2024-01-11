#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to the head of the list to be freed
 * Return: None
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

	if (head)
	{
		while (head->prev)
			head = head->prev;
	}
	while ((ptr = head))
	{
		head = head->next;
		free(ptr);
	}
}

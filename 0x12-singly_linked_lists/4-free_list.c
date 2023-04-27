#include "lists.h"

/**
 * free_list - frees the linked list
 * @head: pointer to the linked list
 *
 * Return: nothing
*/
void free_list(list_t *head)
{
	list_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp->str);
		free(temp);
	}
}

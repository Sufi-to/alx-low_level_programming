#include "lists.h"

/**
 * add_node_end - adds node to the last element of the linked list
 * @head: double pointer to the linked list
 * @str: string to be put in the last element
 *
 * Return: address of the new last element or Null if not
 *
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *update;
	list_t *temp = *head;
	unsigned int l = 0;

	while (str[l])
		l++;

	update = malloc(sizeof(list_t));
	if (update == NULL)
		return (NULL);

	update->str = strdup(str);
	update->len = l;
	update->next = NULL;

	if (*head == NULL)
	{
		*head =  update;
		return (update);
	}
	while (temp->next)
		temp = temp->next;

	temp->next = update;

	return (update);
}

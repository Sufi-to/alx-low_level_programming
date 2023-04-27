#include "lists.h"

/**
 * add_node - adds a new node the existing linked list
 * @head: double pointer to the beginning of the linked list
 * @str: new string to be added to the node
 *
 * Return: the address of the new node or null if it fails
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *update;
	unsigned int i = 0;

	while (str[i])
		i++;

	update = malloc(sizeof(list_t));
	if (update == NULL)
		return (NULL);

	update->str = strdup(str);
	update->len = i;
	update->next = (*head);
	(*head) = update;

	return (*head);
}

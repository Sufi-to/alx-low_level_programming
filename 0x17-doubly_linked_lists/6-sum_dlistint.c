#include "lists.h"
/**
 * sum_dlistint - sums all the data(n) of the list
 * @head: pointer to the head of list
 * Return: the sum of the data or 0 if list is empty
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head)
	{
		while (head->prev)
			head = head->prev;
	}
	else
	{
		return (0);
	}
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
}

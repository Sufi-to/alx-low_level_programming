#include "lists.h"

/**
 * sum_listint - sum of all the data(n) of a listint_t linked list
 * @head: head of the linked list
 * Return: sum of the data or 0 if list is empty
*/
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}

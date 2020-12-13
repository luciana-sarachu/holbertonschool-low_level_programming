#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a listint_t.
 * @head:head
 * Return: Always 0.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

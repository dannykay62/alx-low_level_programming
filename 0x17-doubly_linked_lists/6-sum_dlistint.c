#include "lists.h"

/**
 * sum_dlistint - sums all data in a dlistint_t list
 * @head: pointer to the head of the listint_t list
 * Return: sum of all the data
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

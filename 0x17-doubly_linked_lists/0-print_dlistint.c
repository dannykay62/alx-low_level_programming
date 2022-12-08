#include "lists.h"

/**
 * print_dlistint - prints all elements of a doubly linked list
 * @h: pointer head of the doubly linked list
 * Return: number of nodes in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t node = 0;

	while (h)
	{
		printf("%d/n", h->n);
		h = h->next;
	}
	return (node);
}

#include <stdio.h>
#include "list.h"

/**
 * print_listint - function prints all the elements in the list
 * @h: pointer to listint structure
 * Return: number of nodes
 */

size_t print_listint(const listint *h)
{
	size_t nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}

#include "lists.h"

/**
 * dlistint_len - compute number of elements in a doubly linked list
 * @h: pointer to the head of the dlistint_t list
 * Return: number of elements in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}

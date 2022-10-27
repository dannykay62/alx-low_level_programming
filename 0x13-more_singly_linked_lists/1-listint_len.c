#include "lists.h"
#include <stdio.h>

/**
 * listint_len - function return number of elements in a list
 * @h: pointer to the head of the linked list
 * Return: number of elements in the linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}

#include "lists.h"
#include <stdio.h>

/**
 * get_nodeint_at_index - function that returns the nth node of a listint_t
 * linked list
 * @head: pointer to the head of the list
 * @index: index of node to locate
 * Return: the node located or NULL if node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head  == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}

#include "lists.h"

/**
 * get_dnodeint_at_index - locates a node in a dlistint_t list
 * @head: head of the dlistint_t list
 * @index: node to be located
 * Return: NULL if fail or the address of the node located if success
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}

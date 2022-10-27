#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint_end - function that adds a new node at the end of
 * a listint_t list
 * @head: point to address of the head of the linked list
 * @n: intege to contain the new node
 * Return: the address of the new element or NULL if fail
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last = new;
	}
	return (*head);
}

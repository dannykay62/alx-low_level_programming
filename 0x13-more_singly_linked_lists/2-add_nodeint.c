#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - function that adds a new node at the beginning
 * of a listint_t list
 * @head: pointer to the address of the head of the linked list
 * @n: integer containing the new node
 * Return: address of the new element or NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;
	return (new);
}

#include "lists.h"
#include <stdio.h>

/**
 * pop_listint - function that deletes the head node of a listint_t linked
 * list, and returns the head node’s data (n)
 * @head: pointer to the address of the head of the linked list
 * Return: head node’s data (n) or 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int dat;

	if (*head == NULL)
		return (0);

	temp = *head;
	dat = (*head)->n;
	*head = (*head)->next;

	free(temp);
	return (dat);
}

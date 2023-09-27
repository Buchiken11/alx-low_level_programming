#include "lists.h"

/**
 * free_listint2-function frees the memory of
 * asingly linked list
 * @head: head pointer to the sinhly linked list memory
 * to be freed.
 * Return:nothing
 */

void free_listint2(listint_t **head)
{

	listint_t *current;

	if (head == NULL)
		return;
	while (*head)
	{
		current = (*head)->next;
		free(*head);
		*head = current;
	}
	*head = NULL;
}

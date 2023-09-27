#include "lists.h"

/**
 * free_listint-function frees the memory allocated to
 * a singly liked list
 * @head: the head of the sinhly linked list node
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head->next;
		free(head);
		head = current;
	}
}


#include "lists.h"

/**
 * free_listint - frees a linked list memory
 * @head: listint_t list address to be freed
 */

void free_listint(listint_t *head)
{

	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}

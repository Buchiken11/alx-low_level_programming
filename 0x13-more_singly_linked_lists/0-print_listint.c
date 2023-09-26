#include "lists.h"

/**
 * print_listint-function prints the node to the stdio
 * @h: head of the singly linked list node
 * Return: count or number of nodes in the linked list
 */

size_t print_listint(const listint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		node_count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (node_count);
}

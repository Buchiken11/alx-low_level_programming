#include "lists.h"

/**
 * listint_len-function prints the length of singly linked list node
 * @h: head of the singly linked list nodes
 * Return: the lengths of node
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}

#include "lists.h"

/**
 * add_nodeint-function add a node at the beginning of singly linked list node
 * @head: head of singly liked list node
 * @n: number of data in the list
 * Return: the pointer to the list
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	{
		new->n = n;
		new->next = *head;
		*head = new;
	}
	return (new);
}

#include "lists.h"

/**
 * *add_nodeint_end-function adds a node at the end
 * of sinhly linked listt
 * @head: head of singly linked list
 * @n: number of datas in the list
 * Return: the address of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *current = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (current->next != NULL)
		current = current->next;
	current->next = new_node;
	return (new_node);
}

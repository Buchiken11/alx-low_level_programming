#include "lists.h"

/**
 * pop_listint-function deletes the head node of a linked list
 * @head: pointer to the first node in the singly linked list
 * Return: the data of the deleted head
 */

int pop_listint(listint_t **head)

{
	listint_t *temp;
	int count;

	if (!head || !*head)
		return (0);

	count = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (count);
}

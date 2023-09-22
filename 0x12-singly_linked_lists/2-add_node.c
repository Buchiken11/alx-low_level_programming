#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node-function adds a new node at the
 *  beginning linked list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 * Return: the address of the new element, or NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	listint_t *newlis;

	newlis = malloc(sizeof(listint_t));
	if (!newlis)
		return (NULL);
	newlis->n = n;
	newlis->next = *head;
	*head = newlis;
	return (newlis);

}

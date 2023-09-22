#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end-adds a new node at the end of a linked list
 * @head: double pointer to the list_t linked list
 * @str: string to put in the new node.
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newlist;
	list_t *temp = *head;
	unsigned int len;
}
	len = 0;
	while (str[len])
		len++;
	newlist = malloc(sizeof(list_t));
	if (!newlist)
		return (NULL);
	newlist->str = strdup(str);
	newlist->len = len;
	newlist->next = NULL;
	if (*head == NULL)
	{
		*head = newlist;
		return (newlist);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = newlist;
	return (newlist);
}

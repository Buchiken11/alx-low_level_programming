i#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node-adds a new node  a singly linked list
 * @head: double pointer to the list_t linked list
 * @str: new string to add in the hwad node
 * Return: the address of the new element, or NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{

	list_t *newlist;
	unsigned int len;

	len = 0;
	while (str[len])
		len++;
	newlist = malloc(sizeof(list_t));
	if (!newlist)
		return (NULL);
	newlist->str = strdup(str);
	newlist->len = len;
	newlist->next = (*head);
	(*head) = newlist;
	return (*head);
}

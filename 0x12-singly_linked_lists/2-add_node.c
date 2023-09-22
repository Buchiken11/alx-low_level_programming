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
	list_t *new;
	unsigned int count = 0;
	
	while (str[count])
		count++;
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->count = count;
	new->next = (*head);
	(*head) = new;
	return (*head);
}

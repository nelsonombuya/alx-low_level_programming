#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a new node to the beginning of the linked list
 * @head: Pointer to the pointer of the head node
 * @str: Pointer to the string to be stored in the new element in
 * the linked list
 * Return: The Created Node or NULL upon failure
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	unsigned int len = 0;

	while (str[len])
		len++;

	newNode = malloc(sizeof(list_t));
	if (!newNode)
		return (NULL);

	newNode->str = strdup(str);
	if (!newNode->str)
	{
		free(newNode);
		return (NULL);
	}

	newNode->len = len;
	newNode->next = (*head);
	(*head) = newNode;

	return (*head);
}

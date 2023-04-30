#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - Adds a new node to the end of the linked list
 * @head: Pointer to the pointer of the head node
 * @str: Pointer to the string to be stored in the new element in
 * the linked list
 * Return: The created Node or NULL upon Failure
 */
list_t *add_node_end(list_t **head, const char *str)
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

	if (!(*head))
		(*head) = newNode;
	else
	{
		list_t *current = (*head);

		while (current->next != NULL)
		{
			current = current->next;
		}

		current->next = newNode;
	}

	return (*head);
}

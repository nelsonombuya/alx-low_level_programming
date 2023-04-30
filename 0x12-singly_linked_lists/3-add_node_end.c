#include "lists.h"
#include <stdlib.h>

/**
 * _str_len - Counts the number of characters in a string
 * @str: The character array
 * Return: The number of characters in the string
 */
size_t _str_len(const char *str)
{
	size_t len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	return (len);
}

/**
 * add_node_end - Adds a new node to the end of the linked list
 * @head: Pointer to the pointer of the head node
 * @str: Pointer to the string to be stored in the new element in
 * the linked list
 * Return: The created Node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len = _str_len(str);

	list_t *newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);
	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->len = len;
	newNode->next = NULL;

	if (*head == NULL)
		*head = newNode;
	else
	{
		list_t *current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}

		current->next = newNode;
	}

	return (newNode);
}

#include "lists.h"

/**
 * add_node - Adds a new node to the beginning of the linked list
 * @head: Pointer to the pointer of the head node
 * @str: Pointer to the string to be stored in the new element in
 * the linked list
 * Return: The Created Node
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int len = _str_len(str);

	list_t *newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
		(return NULL);

	newNode->str = strdup(str);
	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->len = len;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}

#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to the head of the list.
 * @idx: index of the list where the new node is to be added.
 * @n: integer element to be added.
 *
 * Return: the address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *newNode;
	listint_t *currentNode;

	currentNode = *head;

	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && currentNode != NULL; i++)
		{
			currentNode = currentNode->next;
		}
	}

	if (currentNode == NULL && idx != 0)
		return (NULL);

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
	}
	else
	{
		newNode->next = currentNode->next;
		currentNode->next = newNode;
	}

	return (newNode);
}

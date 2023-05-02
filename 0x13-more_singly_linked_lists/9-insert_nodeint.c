#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new listint_t node at the
 * specified index in the linked list.
 * @head: Double pointer to the head of the linked list
 * @idx: The index at which the node is to be inserted
 * @n: The value of the node to be inserted
 * Return: The address of the new node, or NULL on failure
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *newNode, *currentNode;

	if (head == NULL)
		return (NULL);

	currentNode = *head;

	for (i = 0; currentNode != NULL && i < idx; i++)
	{
		if (i == idx - 1)
			break;
		currentNode = currentNode->next;
	}

	if (i < idx)
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

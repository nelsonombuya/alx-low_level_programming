#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new listint_t node at the
 * specified index in the linked list.
 * @head: Double pointer to the head of the linked list
 * @idx: The index at which the node is to be inserted
 * @n: The value of the node to be inserted
 * Return: The address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *newNode;
	listint_t *currentNode = *head;

	if (*head == NULL)
		return (NULL);

	if (idx != 0)
		for (i; i < idx - 1; i++)
		{
			currentNode = currentNode->next;
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

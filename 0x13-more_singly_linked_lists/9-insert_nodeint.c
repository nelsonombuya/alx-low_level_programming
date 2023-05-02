#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new listint_t node at the
 * specified index in the linked list.
 * @head: Double pointer to the head of the linked list
 * @idx: The index at which the node is to be inserted
 * @n: The value of the node to be inserted
 * Return: The address of the new node, or NULL on failure
 */
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
	unsigned int i = 0;
	listint_t *newNode, *currentNode = *head;

	if (*head == NULL)
		return (NULL);

	if (idx == 0)
	{
		newNode = malloc(sizeof(listint_t));
		if (newNode == NULL)
			return (NULL);

		newNode->n = n;
		newNode->next = *head;
		*head = newNode;

		return (newNode);
	}

	while (i < idx - 1 && currentNode != NULL)
	{
		currentNode = currentNode->next;
		i++;
	}

	if (currentNode == NULL)
		return (NULL);

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = currentNode->next;
	currentNode->next = newNode;

	return (newNode);
}

#include "lists.h"

/**
 * pop_listint - Pop's the head node of a linked list, and returns
 * the data in the node.
 * @head: Double pointer to the head of the linked list.
 * Return: The head node's data (n).
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *newHeadNode;
	listint_t *currentNode;

	if (*head == NULL)
		return (0);

	currentNode = *head;
	n = currentNode->n;

	newHeadNode = currentNode->next;
	*head = newHeadNode;

	free(currentNode);

	return (n);
}

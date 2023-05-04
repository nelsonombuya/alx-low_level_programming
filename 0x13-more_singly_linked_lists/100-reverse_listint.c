#include "lists.h"

/**
 * reverse_listint - Reverses a linked list.
 * @head: Head node in the linked list.
 * Return: Pointer to the new head node.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previousNode = NULL;
	listint_t *nextNode = NULL;

	while (*head != NULL)
	{
		nextNode = (*head)->next;
		(*head)->next = previousNode;
		previousNode = *head;
		*head = nextNode;
	}

	*head = previousNode;
	return (*head);
}

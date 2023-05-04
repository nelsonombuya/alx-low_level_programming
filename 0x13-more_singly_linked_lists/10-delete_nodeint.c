#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at index index of a
 * listint_t linked list.
 * @head: Double pointer to the head node of a list.
 * @index: Index of the node in the linked list that is to be deleted.
 * Return: 1 if upon success; -1 upon failure.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *previousNode;
	listint_t *nextNode;

	previousNode = *head;

	if (index != 0)
	{
		for (i = 0; i < index - 1 && previousNode != NULL; i++)
		{
			previousNode = previousNode->next;
		}
	}

	if (previousNode == NULL || (previousNode->next == NULL && index != 0))
	{
		return (-1);
	}

	nextNode = previousNode->next;

	if (index != 0)
	{
		previousNode->next = nextNode->next;
		free(nextNode);
	}
	else
	{
		free(previousNode);
		*head = nextNode;
	}

	return (1);
}

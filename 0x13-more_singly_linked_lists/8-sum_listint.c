#include "lists.h"

/**
 * sum_listint - Returns the sum of all of the data (n) of the nodes
 * in a listint_t linked list.
 * @head: Pointer to the head of the linked list
 * Return: The sum of the data (n) of the nodes in the linked list.
 * If the list is empty, returns 0.
 */
int sum_listint(listint_t *head)
{
	unsigned int sum = 0;
	listint_t *currentNode = head;

	if (currentNode == NULL)
		return (0);

	while (currentNode)
	{
		if (currentNode->n != NULL)
		{
			sum += currentNode->n;
		}

		currentNode = currentNode->next;
	}

	return (sum);
}

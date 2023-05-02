#include "lists.h"

/**
 * free_listint2 - Frees the memory of the elements of a linked list
 * and sets the head node to NULL
 * @head: Pointer to the HEAD of the linked list
 * Return: Void
 */
void free_listint2(listint_t **head)
{
	listint_t *current = head;
	listint_t *next_node;

	if (!head)
	{
		while (current != NULL)
		{
			next_node = current->next;
			free(current);
			current = next_node;
		}

		*head = NULL;
	}
}

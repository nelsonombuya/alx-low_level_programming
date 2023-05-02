#include "lists.h"

/**
 * free_listint - Frees the memory of the elements of a linked list
 * @head: Pointer to the HEAD of the linked list
 * Return: Void
 */
void free_listint(listint_t *head)
{
	listint_t *current = head;
	listint_t *next_node;

	while (current != NULL)
	{
		next_node = current->next;
		free(current);
		current = next_node;
	}
}

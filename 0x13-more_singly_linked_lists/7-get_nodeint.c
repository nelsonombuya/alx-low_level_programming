#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node in the linked list.
 * @head: Pointer to the head of the linked list.
 * @index: The index of the node to be returned.
 * Return: The nth node. If node does not exist, returns NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}

	return (head);
}

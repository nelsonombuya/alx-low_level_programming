#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list
 * @h: Pointer to the HEAD of the linked list
 * Return: The number of elements in the linked list
 */
size_t list_len(const list_t *h)
{
	size_t numberOfElements = 0;

	while (h)
	{
		numberOfElements++;
		h = h->next;
	}

	return (numberOfElements);
}

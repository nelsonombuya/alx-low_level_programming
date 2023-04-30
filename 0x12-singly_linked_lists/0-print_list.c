#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints the properties and elements of a linked list
 * @h: Pointer to the HEAD of the linked list
 * Return: The number of elements in the linked list
 */
size_t print_list(const list_t *h)
{
	size_t numberOfElements = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		numberOfElements++;
		h = h->next;
	}

	return (numberOfElements);
}

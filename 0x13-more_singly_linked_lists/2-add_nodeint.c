#include "lists.h"

/**
 * add_nodeint - Adds a new node to the beginning of the linked list
 * @head: Pointer to the pointer of the head node
 * @n: Primitive integer value to be added to the node
 * Return: The Created Node or NULL upon failure
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = (*head);
	(*head) = newNode;

	return (*head);
}

#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
#include <stdio.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;

} listint_t;

/* Question 0 */
size_t print_listint(const listint_t *h);

/* Question 1 */
size_t listint_len(const listint_t *h);

/* Question 2 */
listint_t *add_nodeint(listint_t **head, const int n);

#endif /* LISTS_H */
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

/* Question 3 */
listint_t *add_nodeint_end(listint_t **head, const int n);

/* Question 4 */
void free_listint(listint_t *head);

/* Question 5 */
void free_listint2(listint_t **head);

/* Question 6 */
int pop_listint(listint_t **head);

/* Question 7 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);

/* Question 8 */
int sum_listint(listint_t *head);

/* Question 9 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);

/* Question 10 */
int delete_nodeint_at_index(listint_t **head, unsigned int index);

/* Question 11 */
listint_t *reverse_listint(listint_t **head);

/* Question 12 */
size_t print_listint_safe(const listint_t *head);

#endif /* LISTS_H */

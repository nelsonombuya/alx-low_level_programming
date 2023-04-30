#ifndef _LISTS_H_
#define _LISTS_H_

#include <stdlib.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

/* Question 0 Prototype*/
/* Returns the properties of the linked list */
size_t print_list(const list_t *h);

/* Question 1 Prototype*/
/* Returns the number of elements in the linked list */
size_t list_len(const list_t *h);

/* Question 2 Prototype */
/* Adds a new node at the beginning of the linked list */
list_t *add_node(list_t **head, const char *str);

/* Helper Functions */
/**
 * _str_len - Counts the number of characters in a string
 * @str: The character array
 * Return: The number of characters in the string
 */
size_t _str_len(const char *str)
{
    size_t len = 0;

    while (str[len] != '\0')
    {
        len++;
    }

    return len;
}

#endif

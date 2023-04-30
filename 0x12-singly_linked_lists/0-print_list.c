#include "lists.h"

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
		{
			_putchar('[');
			_putchar('0');
			_putchar(']');
			_putchar(' ');
			_putchar('(');
			_putchar('n');
			_putchar('i');
			_putchar('l');
			_putchar(')');
			_putchar('\n');
		}
		else
		{
			size_t len = h->len;
			size_t divisor = 1;
			int i;

			_putchar('[');

			if (len == 0)
			{
				_putchar('0');
			}
			else
			{
				while (len / divisor >= 10)
					divisor *= 10;

				while (divisor > 0)
				{
					_putchar(len / divisor + '0');
					len %= divisor;
					divisor /= 10;
				}
			}

			_putchar(']');
			_putchar(' ');

			for (i = 0; h->str[i] != '\0'; i++)
			{
				_putchar(h->str[i]);
			}

			_putchar('\n');
		}
		numberOfElements++;
		h = h->next;
	}

	return numberOfElements;
}

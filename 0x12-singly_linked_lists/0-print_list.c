#include "lists.h"
#include <stddef.h>

/**
 * _putchar - Writes the character c to stdout.
 * @c: The character to print.
 * Return: On success 1. On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: The list_t list.
 * Return: The number of nodes.
 */
size_t print_list(const list_t *h)
{
    size_t nodes = 0;
    int i;

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
        }
        else
        {
            for (i = 0; h->str[i]; i++)
            {
                _putchar(h->str[i]);
            }
        }
        _putchar('\n');
        nodes++;
        h = h->next;
    }

    return nodes;
}

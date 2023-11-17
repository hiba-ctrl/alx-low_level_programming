#include "lists.h"

/**
 * _putchar - Writes the character c to stdout.
 * @c: The character to print.
 * Return: On success 1, on error -1, and errno is set appropriately.
 */
int _putchar(char c);

/**
 * print_number - Prints an unsigned number character by character.
 * @n: The number to be printed.
 */
void print_number(unsigned int n)
{
    if (n / 10)
    print_number(n / 10);
    _putchar((n % 10) + '0');
}

/**
 * print_list - Prints all elements of a list_t list.
 * @h: Pointer to the start of the list.
 * Return: The number of nodes.
 */
size_t print_list(const list_t *h)
{
    size_t nodes = 0;
    int i;

    while (h != NULL)
    {
        _putchar('[');
        if (h->str == NULL)
        {
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
            print_number(h->len);
            _putchar(']');
            _putchar(' ');
            for (i = 0; h->str[i] != '\0'; i++)
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

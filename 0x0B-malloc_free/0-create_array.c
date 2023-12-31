#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of char
 * @size: size of array
 * @c: the initialisation char of array
 *
 * Return: a pointer to char
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	if (size == 0)
	{
		return	(NULL);
	}

	ar = malloc(size * sizeof(char));
	if (ar == NULL)
	{
		return	(NULL);
	}

	for (i = 0; i < size; i++)
	{
		ar[i] = c;
	}

	return	(ar);
}

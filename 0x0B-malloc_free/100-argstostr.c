#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: argument count
 * @av: argument vector
 *
 * Return: pointer to the new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *str, *ptr;
	int len = 0, i, j;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* Calculate total length required */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
		len++; /* For the '\n' */
	}

	str = malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);

	ptr = str;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			*ptr = av[i][j];
			ptr++;
		}
		*ptr = '\n';
		ptr++;
	}
	*ptr = '\0';

	return (str);
}

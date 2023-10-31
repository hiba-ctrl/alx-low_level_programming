#include "main.h"
#include <stdlib.h>

/**
 * strtow - Splits a string into words.
 * @str: The string to be split.
 *
 * Return: If str == NULL, str == "", or the function fails - NULL.
 *         Otherwise - a pointer to an array of strings (words).
 */
char **strtow(char *str)
{
	char **words;
	int i = 0, j, k, l, count = 0, len = 0;

	if (!str || !*str)
		return (NULL);

	/* Count words */
	for (i = 0; str[i]; i++)
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			count++;

	if (count == 0)
		return (NULL);

	words = malloc((count + 1) * sizeof(char *));
	if (!words)
		return (NULL);

	for (i = 0, j = 0; j < count; j++)
	{
		while (str[i] == ' ')
			i++;

		l = i;
		while (str[i] && str[i++] != ' ')
			len++;

		words[j] = malloc((len + 1) * sizeof(char));
		if (!words[j])
		{
			for (k = 0; k < j; k++)
				free(words[k]);
			free(words);
			return (NULL);
		}

		for (k = 0; l < i - 1; l++, k++)
			words[j][k] = str[l];
		words[j][k] = '\0';
		len = 0;
	}
	words[j] = NULL;

	return (words);
}

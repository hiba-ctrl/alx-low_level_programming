#include "main.h"
#include <stdlib.h>

/**
 * word_count - Counts the number of words in a string.
 * @str: The string to be counted.
 *
 * Return: The number of words in the string.
 */
int word_count(char *str)
{
	int count = 0, i = 0;

	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			count++;
		i++;
	}
	return (count);
}

/**
 * strtow - splits a string into words.
 * @str: The string to be split.
 *
 * Return: If str == NULL, str == "", or the function fails - NULL.
 *         Otherwise - a pointer to an array of strings (words).
 */
char **strtow(char *str)
{
	char **words, *word;
	int i = 0, j, k, l, count;

	if (str == NULL || *str == '\0')
		return (NULL);

	count = word_count(str);
	if (count == 0)
		return (NULL);

	words = malloc((count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	for (j = 0; j < count; j++)
	{
		while (str[i] == ' ')
			i++;

		l = i;
		while (str[i] && str[i] != ' ')
			i++;

		word = malloc((i - l + 1) * sizeof(char));
		if (word == NULL)
		{
			while (j >= 0)
				free(words[j--]);
			free(words);
			return (NULL);
		}

		for (k = 0; l < i; l++, k++)
			word[k] = str[l];
		word[k] = '\0';

		words[j] = word;
	}
	words[j] = NULL;

	return (words);
}

#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to a newly allocated space containing s1 followed by s2
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int len_s1 = 0, len_s2 = 0, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len_s1])
		len_s1++;
	while (s2[len_s2])
		len_s2++;

	concat_str = malloc((len_s1 + len_s2 + 1) * sizeof(char));
	if (concat_str == NULL)
		return (NULL);

	for (i = 0; i < len_s1; i++)
		concat_str[i] = s1[i];

	for (j = 0; j < len_s2; j++)
		concat_str[i + j] = s2[j];

	concat_str[i + j] = '\0';

	return (concat_str);
}

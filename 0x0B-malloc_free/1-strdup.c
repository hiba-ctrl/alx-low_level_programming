#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @*str: pointer to string
 *
 * Return: pointer to a newly allocated space in memory
 */

char *_strdup(char *str)
{
	char *new_str;
	int len = 0;
	int i;

	if (str == NULL)
	{
		return	(NULL);
	}

	while(str[len])
	{
		len++;
	}

	new_str = malloc(sizeof(char) * (len+1));
	if(new_str == NULL)
	{
		return (NULL);
	}

	for(i=0;i <= len; i++)
	{
		new_str[i] = str[i];
	}

	return (new_str);
}

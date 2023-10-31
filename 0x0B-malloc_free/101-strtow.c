#include "main.h"
#include <stdlib.h>

/**
 * strtow - Splits a string into words.
 * @str: The string to be split.
 *
 * Return: If str == NULL, str == "", or the function fails - NULL.
 *         Otherwise - a pointer to an array of strings
 */
char **strtow(char *str)
{
    char **words;
    int i = 0, j, w = 0, wc = 0, len;

    for (i = 0; str[i]; i++)
        wc += (str[i] != ' ' && (!i || str[i - 1] == ' ')) ? 1 : 0;

    if (!str || !*str || !wc)
        return (NULL);

    words = malloc((wc + 1) * sizeof(char *));
    if (!words)
        return (NULL);

    for (i = 0, j = 0; j < wc; j++, w = 0)
    {
        while (str[i] == ' ')
            i++;
        len = i;
        while (str[len] && str[len++] != ' ');

        words[j] = malloc(len - i + 1);
        if (!words[j])
            for (; j >= 0; j--)
                free(words[j]), free(words), words = NULL;
        if (!words)
            return (NULL);

        while (str[i] && str[i] != ' ')
            words[j][w++] = str[i++];
        words[j][w] = '\0';
    }
    words[j] = NULL;
    return (words);
}

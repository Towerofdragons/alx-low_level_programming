#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: sample string
 *
 * Return: NULL if str = NULL OR pointer to a newly allocated space in memory
 */

char *_strdup(char *str)
{
	int size;
	int i;
	char *copy;

	if (str == NULL)
	{
		return (NULL);
	}

	size = 0;

	while (str[size] != '\0')
	{
		size++;
	}

	copy = malloc(sizeof(char) * size);

	if (copy != NULL)
	{
		i = 0;

		while (i < size)
		{
			copy[i] = str[i];
			i++;
		}
	}

	return (copy);
}

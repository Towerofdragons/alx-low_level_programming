#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a char in a string
 * @s: pointer to the source string
 * @c: string being searched for
 *
 * Return: pointer to first occurence of string or NULL if not
 */

char *_strchr(char *s, char c)
{
	int i;
	char *f;

	f = NULL;
	i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			f = &s[i];
			break;
		}

		i++;
	}

	return (f);

}

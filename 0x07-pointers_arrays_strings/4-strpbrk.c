#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - ocates the first occurrence in the string
 * @s: source string
 * @accept: set of accepted chars
 *
 * Return: pointer to matching byte
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				return (&s[i]);
			}
			j++;
		}


		j = 0;
		i++;
	}
	return (NULL);
}

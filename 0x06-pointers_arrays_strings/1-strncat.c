#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenate two strings to a limit
 * @dest: string to receive concatenation
 * @src: string to be concatenated
 * @n: limit the bytes for concatenation from src
 *
 * Return: string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (1)
	{
		if (dest[i] == '\0')
		{
			break;
		}
		i++;
	}

	while (1)
	{

		if (src[j] == '\0' || j + 1 == n)
		{
			if (j + 1 >= n && src[j] == '\0')
			{
				break;
			}
			else
			{
				dest[i] = src[j];
			}
			break;
		}

		dest[i] = src[j];

		j++;
		i++;

	}
	return (dest);
}

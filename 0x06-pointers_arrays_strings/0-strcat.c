#include "main.h"
/*#include <stdio.h>*/
/**
 * _strcat - concatenates two strings
 * @src: appends to...
 * @dest: string for attatchment
 *
 * Return: concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;

	while (dest[i])
	{/*
	*finds length of dest string up to terminator/
	*	if (dest[i] == ' ')
	*	{
	*		printf("_");
	*
	*	}
	*	else
	*	{
	*		printf("%c",dest[i]);
	*	}
	*/
		i++;
	}


	j = 0;

	while (1)
	{
		if (src[j] == '\0')
		{/*Add terminating character from j*/

			dest[i] = src[j];
			break;
		}

		dest[i] = src[j];
		j++;
		i++;
	}

	return (dest);
}

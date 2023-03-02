#include "main.h"
/**
 * _strcat - concatenates two strings
 * @src: appends to...
 * @dest: string for attatchment
 *
 * Return: concatenated string 
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;

	while (dest[i])
	{/*finds length of dest string up to terminator*/
		i++;
	}

	/*i++; moves selector over dest terminator*/

	int j = 0;

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

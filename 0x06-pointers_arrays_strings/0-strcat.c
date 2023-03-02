#include "main.h"
#include <stdio.h>
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

	i++; /*moves selector over dest terminator*/
	
	int j = 0;

	while (1)
	{
		/*printf("\nWriting loop : %c\n",src[j]);*/
		if (src[j] == '\0')
		{/*Add terminating character from j*/

			/*printf("\nWriting loop terminated\n");*/

			dest[i] = src[j];
			break;
		}

		dest[i] = src[j];
		j++;
		i++;
	}
	/*printf("\n result : %s\n",dest);*/
	return (dest);
}

#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: target pointer for copying
 * @src: where string comes from
 * @n: max bytes of src to be copied
 * Return: string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for(i = 0; i+1 < n || src[i] != '\0'; i++)
	{
		dest[i] = src [i];
	}

	return (dest);
}

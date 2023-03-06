#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: pointer to area receiving copy
 * @src: source for memory copy
 * @n: number of bytes to be copied
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}

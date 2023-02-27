#include "main.h"

/**
 * _strlen - return length of string
 * @s: pointer to string
 *
 * Return: length of string
 */


int _strlen(char *s)
{
	int i = 0;

	while (1)
	{
		if (!s[i])
		{
			break;
		}
		i++;
	}

	return (i);
}

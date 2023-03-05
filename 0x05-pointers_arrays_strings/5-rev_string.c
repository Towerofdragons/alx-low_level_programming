#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses string in memory
 *
 * @s: string 
 *
 * Return: nothing
 */

void rev_string(char *s)
{
	int i = 0;
	_putchar('\n');
	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}

	char *buffer = s;

	printf("\ns is size: %d\n",i);
	printf("buffer holds: %s\n",buffer);

	int j = 0;

	while (i >= 0)
	{
		_putchar(buffer[i]);
	//	printf("i:%i, j:%i\n",i,j);
		_putchar('\n');
		*(s+j) = buffer[i];
		j++;
		i--;
	}
	_putchar('\n');
	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}


}

#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,initializes it with a specific char
 * @size: size of array
 * @c: char for initialization
 *
 * Return: pointer to allocated space
 */

char *create_array(unsigned int size, char c)
{
	char *string;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	string = malloc(sizeof(char) * size);

	i = 0;

	if (string != NULL)
	{
		while (i < size)
		{
			string[i] = c;
			i++;
		}
	}

	return (string);


}

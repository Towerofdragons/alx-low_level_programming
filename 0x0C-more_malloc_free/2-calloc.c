#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of array elements
 * @size: size of element
 *
 * Return: pointer to array
 */
void format(char *array, int length)
{
	int i;

	i = 0;

	while (i < length)
	{
		array[i] = 0;
		i++;
	}

}

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;
	unsigned int space;

	if (nmemb == 0 || size == 0)
		return (NULL);

	space = nmemb * size;
	array = malloc(space);

	if (array == NULL)
		return (NULL);
	format(array, space);
	return (array);
}

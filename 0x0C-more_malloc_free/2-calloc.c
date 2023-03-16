#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of array elements
 * @size: size of element
 *
 * Return: pointer to array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;
	int space;

	if (nmemb == 0 || size == 0)
		return (NULL);

	space = nmemb * size;
	array = malloc(space);

	if (array == NULL)
		return (NULL);
	return (array);
}

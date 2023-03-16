#include "main.h"
#include <stdlib.h>

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

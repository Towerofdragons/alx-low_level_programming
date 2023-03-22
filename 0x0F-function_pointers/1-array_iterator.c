#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - executes the passed function on each array element
 * @array: pointer to given array
 * @size: size of given array
 * @action: pointer to passed function
 *
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || size == 0 || action == NULL)
	{
		return;
	}
	i = 0;

	while (i < size)
	{
		action(array[i]);
		i++;
	}

}

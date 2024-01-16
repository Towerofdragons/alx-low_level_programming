#include "search_algos.h"
#include <stdio.h>

/**
 * linear_search -  self explanatory
 *
 * @array: points to beginning of sort array
 * @size: number of elements in array
 * @value: value being searched for
 *
 * Return: Index containing @value
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;
	int value_index;

	value_index = -1;

	if (!array)
		return (-1);

	for (i = 0; i <= size - 1; i++)
	{
		printf("Value checked array[%li] = [%d]\n", i, array[i]);

		if (array[i] == value)
		{
			value_index = i;
			break;
		}
	}

	return (value_index);
}

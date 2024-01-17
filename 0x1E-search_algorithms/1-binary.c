#include "search_algos.h"
#include <stdio.h>
#include <math.h>

/**
 * binary_search - search via binary_search
 *
 * @array: search array
 * @size: array size
 * @value: search value
 *
 * Return: index of first instance of value
 */

int binary_search(int *array, size_t size, int value)
{
	int L;
	int R;
	int M;
	int i;

	if (!array)
		return (-1);
	L = 0;
	R = size - 1;

	while (L <= R)
	{
		printf("Searching in array: ");
		for (i = L; i <= R; i++)
		{
			printf("{%d}", array[i]);
			if (i != R)
				printf(",");
		}
		printf("\n");
		M = floor((L + R) / 2);

		if (array[M] == value)
		{
			return (M);
		}
		else
		{
			if(array[M] < value)
			{
				L = M + 1;
			}
			else
			{
				R = M - 1;
			}
		}
	}
	return (-1);
}



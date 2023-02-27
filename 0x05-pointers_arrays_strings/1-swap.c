#include "main.h"
/**
 * swap - swaps integers with their pointers
 * @a: pointer to be switched
 * @b: another pointer for switching
 *
 * Return: void
 */

void swap_int(int *a ,int *b)
{
	int buffer;

	buffer = *a;
	*a = *b;
	*b = buffer;
}

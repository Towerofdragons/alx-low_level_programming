#include "main.h"

/**
 * _abs - creates an absolute value for n
 * @n: int to be converted
 *
 * Return: converted int
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
	}

	return (n);
}

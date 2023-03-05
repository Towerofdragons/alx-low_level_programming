#include "main.h"

/**
 * print_sign - prints sign of a number
 * @n: input for thr number
 *
 * Return: 1 if > 0
 * 	   0 if  0
 * 	   -1 if < 0
 */
int print_sign(int n)
{
	if (n == 0)
	{
		return (0);
	}

	if (n > 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}

	return (0);
}

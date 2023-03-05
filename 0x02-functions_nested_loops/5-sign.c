#include "main.h"

/**
 * print_sign - prints sign of a number
 * @n: input for thr number
 *
 * Return: 1 if > 0
 * 0 if  0
 * -1 if < 0
 */
int print_sign(int n)
{
	int sign;

	if (n == 0)
	{
		_putchar('0');
		sign = 0;
	}

	if (n > 0)
	{
		_putchar('+');
		sign = 1;
	}
	if (n < 0)
	{
		_putchar('-');
		sign = -1;
	}

	return (sign);
}

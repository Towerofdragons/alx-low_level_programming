#include "main.h"

/**
 * print_last_digit - self explanatory
 * @n: digit
 *
 * Return: last digit from n
 */
int print_last_digit(int n)
{
	int ld;

	if (n < 0)
	{
		n = n * -1;
	}

	ld = n % 10;
	_putchar(ld + 48);
	return (ld);
}

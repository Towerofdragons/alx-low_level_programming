#include "main.h"

/**
 * print_numbers - prints 0-9 followed by new line
 *
 * Return: Noting
 */

void print_numbers(void)
{
	int i = 48;

	while (i <= 57)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}

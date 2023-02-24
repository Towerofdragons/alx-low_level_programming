#include "main.h"

/**
 * print_line - prints a line on the terminal
 *@n: desired length of the line
 *
 * Return: nothing
 */

void print_line(int n)
{
	int i = 0;


	while (i < n)
	{
		if (n <= 0)
		{
			_putchar('\n');
			break;
		}
		_putchar('_');
		i++;
	}

	_putchar('\n');
}

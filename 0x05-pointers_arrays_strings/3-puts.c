#include "main.h"

/**
 * _puts - prints a tring then newline
 * @str: string for printing
 *
 * Return: void(nothing)
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}

	 _putchar('\n');
}

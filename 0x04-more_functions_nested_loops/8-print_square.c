#include "main.h"

/**
 * print_square - print square followed by newline
 * @size: desired size of square
 *
 * Return: nothing
 */

void print_square(int size)
{
	if (size > 0)
	{
		int width, height;

		width = height = 0;

		while (height < size)
		{
			while (width < size)
			{
				_putchar('#');
				width++;
			}

			_putchar('\n');

			width = 0;
			height++;

		}
	}
	else
	{
		_putchar('\n');
	}
}

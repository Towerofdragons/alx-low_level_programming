#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - draws adiagonal on the terminal
 * @n: number of \ to be printed
 *
 * Return: nothing
 */

void print_diagonal(int n)
{
	int i = 0;
	int j = 0;

	if (n > 0)
	{

		while (i < n)
		{
			while (j < i + 1)
			{
				if (j == i)
				{
					_putchar('\\');
				}
				else
				{
					_putchar(' ');
				}

				j++;
			}

			j = 0;
			i++;

			_putchar('\n');
		}

	}
	else
	{
		_putchar('\n');
	}
}

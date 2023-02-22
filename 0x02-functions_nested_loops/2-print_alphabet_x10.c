#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times
 *
 * Return : nothing
 */

void print_alphabet_x10(void)
{
	int letter = 97;
	int i;

	for (i = 0; i < 10; i++)
	{
		while (letter <= 122)
		{
			_putchar(letter);
			letter++;
		}
		letter = 97;
		_putchar('\n');
	}
}

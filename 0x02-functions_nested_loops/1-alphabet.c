#include "main.h"
/**
 * print_alphabet - prints the alphabet lowrcase followed by a new line
 *
 * Return: 0
 */

void print_alphabet(void)
{
	int letter = 97;

	while (letter <= 122)
	{
		_putchar(letter);
		letter++;
	}

	_putchar('\n');
}

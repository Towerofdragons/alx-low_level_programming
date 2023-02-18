#include <stdio.h>

/**
 * main - prints lowercase alphabet in reverse
 *
 * Return: 0 success
 */

int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}

	putchar('\n');
	return (0);
}

#include <stdio.h>

/**
 * main - prints a to z then A to Z then newline
 *
 * Return: 0 success
 */

int main(void)
{

	char letter = 'a';

	while (letter <= 'z')
		putchar(letter);

	letter = 'A';

	while (letter <= 'Z')
		putchar(letter);

	putchar('\n');

	return (0);

}

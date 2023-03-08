#include "main.h"

/**
 * _print_rev_recursion - prints string in reverse
 * @s - string
 *
 * Return: nothing
 */

void _print_rev_recursion(char *s)
{
	int i;

	i = 0;
	recur_back(s, i);
}

/**
 * recur_back - recursive function for printing
 * @s: string
 * @i: index 
 *
 * Return: nothing
 */

void recur_back(char *s, int i)
{
	if (s[i] != '\0')
	{
		recur_back(s, i + 1);
	}

	_putchar(s[i]);
}

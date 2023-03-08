#include "main.h"

/**
 * _puts_recursion - prints a string recursively
 * @s - string for printing
 *
 * Return : nothing
 */

void _puts_recursion(char *s)
{
	int i;
	
	i = 0;

	recur_forward (s, i);

_putchar ('\n');
}

/**
 * recur_forward - recursive function that prints
 * @s - string printed
 * @i - index to traverse string
 *
 * Return: nothing
 */

void recur_forward(char *s, int i)
{
	if (s[i] != '\0')
	{/*base case*/

		_putchar(s[i]);
		recur_forward (s, i + 1);

	}

}

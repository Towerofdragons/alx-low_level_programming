#include "main.h"

/**
 * _strlen_recursion - finds length of a string
 * @s: string
 *
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	int i;

	i = 0;

	i = recur_count(s, i);

	return (i);
}

/**
 * recur_count - recursive counting function
 * @s: string
 * @i: index
 *
 * Return: length of string
 */
int recur_count(char *s, int i)
{
	if (s[i] == '\0')
	{
		return (i);
	}
	return (recur_count(s, i + 1));
}

#include "main.h"

/**
 * _isdigit - checks for digit from 0 and 9
 * @c: digit to be checked
 *
 * Return: 1 if c is digit, else 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

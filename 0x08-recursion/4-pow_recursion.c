#include "main.h"

/**
 * _pow_recursion - applies power to a number
 * @x: the number
 * @y: power intended
 *
 * Return: result of operation
 */

int _pow_recursion(int x, int y)
{
	int result;

	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}


	result = x * _pow_recursion(x, y - 1);

	return (result);
}

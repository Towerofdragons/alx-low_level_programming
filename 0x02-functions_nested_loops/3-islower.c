#include "main.h"

/**
 * _islower - Checks for lowercase character
 *@c: character to be tested
 *
 *Return: 1 if lowercase 0 if otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

#include "main.h"

void _print_rev_recursion(char *s)
{
	int i;

	i = 0;
	recur_back(s, i);
	_putchar('\n');
}

void recur_back(char *s, int i)
{
	if (s[i] != '\0')
	{
		recur_back(s, i + 1);
	}

	_putchar(s[i]);
}

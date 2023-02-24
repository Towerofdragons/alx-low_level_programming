#include "main.h"
/**
 * more_numbers - prints 0 - 14 10 times
 *
 * Return: nothing
 */

void more_numbers(void)
{
	int i;
	int t;
	int excess;

	i = 0;

	for (t = 1; t <= 10; t++)
	{
		while(i < 14)
		{
			if (i > 9)
			{
				excess = i - 9;
			}

			_putchar(i + 48);

			if (excess > 0)
			{
				_putchar(excess + 48);
			}
			i++;
		}

		_putchar('\n');
	}
}

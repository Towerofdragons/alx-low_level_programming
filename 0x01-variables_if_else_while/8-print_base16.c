#include <stdio.h>

/**
 * main - prints all base 16 numbers in lowercase followed by newline.
 *
 *return: 0 success
 */

int main(void)
{
	int num = 48;

	while (num <= 102)
	{
		if (num == 58)
		{
			num = 97;
		}

		putchar(num);
		num++;
	}

	putchar('\n');
	return (0);
}

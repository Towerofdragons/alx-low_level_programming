#include <stdio.h>

/**
 * main - prints single digits of base 10 followed by newline
 *
 * Return: 0 success
 */

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		printf("%d", num);
		num++;
	}

	printf("\n");
	return (0);

}

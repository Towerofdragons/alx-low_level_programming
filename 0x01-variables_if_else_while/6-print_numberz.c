#include <stdio.h>

/**
 * main - print 0 to 9 with putchar
 *
 * Return: 0 success
 */

int main(void)
{
	int num = 48;

	while(num < 58)
	{
		putchar(num);
		num++;
	}

	putchar('\n');
	return(0);

}

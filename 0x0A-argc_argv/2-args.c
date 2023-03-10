#include <stdio.h>

/**
 * main - print every provided arguement
 * @argc: number of arguements
 * @argv: array of provided arguements
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}

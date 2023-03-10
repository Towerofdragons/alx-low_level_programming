#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers.
 * @argc: no. of arguements given
 * @argv: array of arguements given
 *
 * Return: 0 on success, 1 on any error
 */

int main(int argc, char *argv[])
{
	int sum;
	int i;
	int j;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	sum = 0;

	for (i = 1; i < argc; i++)
	{
		j = 0;

		while (argv[i][j] != '\0')
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}

			j++;
		}

		sum = sum + atoi(argv[i]);
	}

	printf("%i\n", sum);

	return (0);

}

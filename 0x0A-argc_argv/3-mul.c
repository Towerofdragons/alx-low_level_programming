#include <stdio.h>
#include <stdlib.h>
/**
 * main - print result of multiplication
 * @argc: no. of arguements given
 * @argv: array of input
 *
 * Return: 0 on success, 1 on error
 */

int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);

}

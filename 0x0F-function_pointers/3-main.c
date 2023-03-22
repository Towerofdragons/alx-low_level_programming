#include "3-calc.h"

int main(int argc,char *argv[])
{
	int num1, num2, result;
	char *operator;
	int (*selected_fun)(int,int);

	if (argc > 4 || argc < 4)
	{
		printf("Error\n");
		exit(98);
	}
	
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];

	selected_fun = get_op_func(operator);
	if (selected_fun == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	result = selected_fun(num1, num2);
	printf("%i\n", result);
	return (0);
}

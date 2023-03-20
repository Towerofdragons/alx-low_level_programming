#include "main.h"

int is_prime_number(int n)
{
	int i;

	i = 2;

	return(recur_prime(n, i));
}

int recur_prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	else
	{
		if (n % i == 0)
		{
			return (0);
		}
		else
		{
			return recur_prime(n, i - 1);
		}      
	}
}

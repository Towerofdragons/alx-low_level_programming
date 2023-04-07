#include "main.h"
#include <math.h>

/**
 * binary_to_uint - converts binary in string to unsigned int
 * @b: string with binary
 *
 * Return: converted value
 */
unsigned int binary_to_uint(const char *b)
{
	int len;
	int i;
	int place_value;
	int result;
	int bit;

	if (b == NULL)
		return (0);
	len = strlen(b) - 1;
	result = 0;
	place_value = 0;
	for (i = len; i >= 0; i--)
	{
#ifdef DEBUG
		printf("[%c]", b[i]);
#endif
		if (b[i] == '1' || b[i] == '0')
		{
			bit = b[i] - 48;
#ifdef DEBUG
			printf("(%i)\n", bit);
#endif
			result += bit << place_value;
		}
		else
			return (0);

		place_value++;

	}

	return ((unsigned int) result);

}

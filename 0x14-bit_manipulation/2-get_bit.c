#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: checking bits
 * @index: which to check bit
 *
 * Return: the value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int d, res;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
  /*left shift index*/
	d = 1 << index;
  
	res = n & d;
	if (res == d)
  {
		return (1);
  }
	return (0);
}

#include "main.h"

/**
 * _length - find the length of binary int
 * @n: value to find its length
 * Return: length
*/
int _length(unsigned long int n)
{
	int length;
  
  length = 0;
	while (n > 0)
	{
		length++;
		n >>= 1;
	}

	length--;

	return (length);
}

/**
 * print_binary - converts a decimal value to binary
 * @n: number to convert
 * Return: nothing
*/
void print_binary(unsigned long int n)
{
	int length;
	unsigned long int mask = 1;

	length = _length(n);

	if (length > 0) 
		mask <<= length; 

	while (mask > 0)
	{
		if (mask & n) /*if n & mask == 1 print 1*/
			_putchar('1');
		else /*else if n & mask == 0 print 0*/
			_putchar('0');

		mask >>= 1;
	}
}

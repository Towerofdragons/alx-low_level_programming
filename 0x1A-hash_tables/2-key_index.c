#include "hash_tables.h"

/**
 * key_index - find index of a provided value
 * @key: value
 * @size: size of the table array
 *
 * Return: hash index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key);
	return (index % size);
}

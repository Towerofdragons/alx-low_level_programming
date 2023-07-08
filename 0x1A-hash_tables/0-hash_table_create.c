#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 *
 * Return: newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	hash_node_t *new_array;
	unsigned long int i;

	new_table = malloc(sizeof(hash_table_t));
	new_array = malloc(sizeof(hash_node_t *) * size);

	if (new_array == NULL || new_table == NULL)
	{
		return (NULL);
	}

	new_table -> size = size;
	new_table -> array = &new_array;
	
	i = 0;
	while(i < size - 1)
	{
		/*new_array[i] = NULL;*/
		i++;
	}
	return (new_table);
	

}

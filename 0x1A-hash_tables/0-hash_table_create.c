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
	unsigned long int i;

	new_table = malloc(sizeof(hash_table_t));

	if (new_table == NULL)
	{
		return (NULL);
	}

	new_table -> size = size;
	new_table -> array = malloc(sizeof(hash_node_t *) * size);
	
	if (new_table -> array == NULL)
	{
		return (NULL);
	}

	i = 0;
	while(i < size)
	{
		new_table -> array[i] = NULL;
#if DEBUG
		printf("%lu:: %lu\n", i, size);
#endif
		i++;
	}
#if DEBUG
	printf("Initialised\n");
#endif
	return (new_table);
	

}

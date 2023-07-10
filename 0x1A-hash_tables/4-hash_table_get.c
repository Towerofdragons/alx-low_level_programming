#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with key
 * @ht: hash table object
 * @key: retrieving key
 *
 * Return: value (success)
 * 	   NULL  (Fail)
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *curr;
	unsigned long int index;

	if (ht == NULL || key == NULL)
	{
		return (NULL);
	}

	index = key_index((const unsigned char *)key, ht -> size);

	if (ht -> array[index] == NULL)
	{
		return (NULL);
	}
	else
	{
		curr = ht -> array[index];
		while(curr !=  NULL)
		{
			if (strcmp(key, curr -> key) == 0)
			{
				break;
			}
			curr = curr -> next;
		}
	}

	return(curr -> value);
}

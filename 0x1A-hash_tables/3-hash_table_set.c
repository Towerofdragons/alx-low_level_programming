#include "hash_tables.h"

/**
 * hash_table_set - add element to a hash table
 * @ht: hash table address
 * @key: key (cannot be empty)
 * @value: value associated with key (can be empty)
 *
 * Return: 1(success)
 * 	   0 (otherwise)
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *curr;
	hash_node_t *new_node;

	if (ht == NULL)
	{
		return (0);
	}
	if (key == NULL || strlen(key) == 0 || value == NULL)
	{
		return (0);
	}
	
#if DEBUG
	printf("%lu, %s\n", ht -> size, value);
#endif
	index = key_index((const unsigned char *)key, ht -> size);
#if DEBUG
	printf("Using index: %lu\n", index);
#endif

	if (ht -> array[index] == NULL)
	{
#if DEBUG
		printf("Empty INDEX: Creating new node\n");
#endif
		/*create new node*/
		new_node = create_node((char *)key, (char *)value);
		ht -> array[index] = new_node;
#if DEBUG
		printf("Node created successfully\n");
		/*Testing new node*/
 		printf("%s\n", ht -> array[index] -> value);
#endif
		return(1);
	}
	else
	{
		curr = ht -> array[index];
		while (curr != NULL)
		{
			if (strcmp(key, curr -> key) == 0)
			{
#if DEBUG
				printf("Similar found for '%s' :: UPDATING\n", key);
#endif
				strcpy(curr -> value, value);/*TODO*/
				/*curr -> value = strdup(value);*/
#if DEBUG
				printf("UPDATED...");
#endif
				return (1);

			}
			curr = curr -> next;
		}
#if DEBUG
		printf("NONE found for '%s' :: Attatching new node\n", key);
#endif

		new_node = create_node((char *)key, (char *)value);
		new_node -> next = ht -> array[index];
		ht -> array[index] = new_node;
	}

	return(1);


}

hash_node_t *create_node(char *key, char *value)
{
	hash_node_t *new;

	new = malloc(sizeof(hash_node_t));
	
	if (new == NULL)
	{
		return(NULL);
	}


	new -> key = strdup(key);
	new -> value = strdup(value);
	new -> next = NULL;
	return(new);

}

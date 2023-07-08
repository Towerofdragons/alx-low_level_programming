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
	if (key == NULL || strlen(key) == 0)
	{
		return (0);
	}
	
#if DEBUG
	printf("%lu, %s\n", ht -> size, value);
#endif
	index = key_index((const unsigned char *)key, ht -> size);

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
				curr -> value = (char *) value;
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
	char *new_key;
	char *new_value;

	new = malloc(sizeof(hash_node_t));
	
	if (new == NULL)
	{
		return(NULL);
	}

	new_key = malloc(sizeof(char) * (strlen(key) + 1));
	if (new_key == NULL)
	{
		free(new);
		return(NULL);
	}

	new_value = malloc(sizeof(char) * (strlen(value) + 1));
        if (new_value == NULL)
        {
                free(new);
		free(new_key);
                return(NULL);
        }

	strcpy(new_key, key);
	strcpy(new_value, value);

	new -> key = new_key;
	new -> value = new_value;
	new -> next = NULL;
	return(new);

}

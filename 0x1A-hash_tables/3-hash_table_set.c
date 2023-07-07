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
	hash_node_t *new_node;
	hash_node_t *curr;
	char *new_value;
	char *new_key;

	if (ht == NULL)
	{
		return (0);
	}
	if (key == NULL || strlen(key) == 0)
	{
		return (0);
	}
	
	index = key_index((const unsigned char *)key, ht -> size);

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		return (0);
	}
	new_value =  malloc(sizeof(char) * strlen(value));
	new_key = malloc(sizeof(char) * strlen(key));
	
	if (new_value == NULL)
	{
		free(new_node);
		return (0);
	}

	if (new_key == NULL)
	{
		free(new_node);
		free(new_value);
		return (0);
	}

	strcpy(new_value, value);

	strcpy(new_key, key);
	new_node -> key = new_key;
	new_node -> value = new_value;

	if (ht -> array[index] == NULL)
	{
		new_node -> next =  NULL;
		ht -> array[index] = new_node;
	}
	else
	{
		curr = ht -> array[index];
		while (curr != NULL)
		{
			if (strcmp(curr -> key, key) == 0)
			{
				if (strcmp(curr -> value, value) == 0)
				{
					free(new_value);
					free(new_key);
					free(new_node);
					return (1);
				}
				else
				{
					curr -> value = new_value;
					return (1);
				}
			}
			curr = curr -> next;
		}

		new_node -> next = ht -> array[index];
		ht -> array[index] = new_node;
	}

	return (1);

}
/*
hash_table cannot be NULL
KEY cannot be empty
value can be empty - duplicate entry

Add an element to the hash table
	USE KEY TO FIND PLACE TO INSERT
		hash value, find the index
		at index: if index has NULL
			add node
		else check if key present
			if key present
				if replace value if needed
			else
				create node with key
				add node at beginnig of list

*/

#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table address
 *
 * @Return: Nothing
 */

/*who is being freed?
 * ht-> array[index] node(key and value) : for every node
 * ht -> array[index] nodes themselves
 * ht -> array
 * ht itself
 *
 * */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *curr;
	hash_node_t *temp;
	unsigned long int i;

	if (ht == NULL)
	{
		return;
	}

	for (i = 0; i < ht -> size; i++)
	{
		if (ht -> array[i] == NULL)
			continue;
		else
		{
			/*freeing all nodes of list at index*/
			curr = ht -> array[i];
			while (curr != NULL)
			{
				temp = curr -> next;
				free(curr -> key);
				free(curr -> value);
				free(curr);
				curr = temp;
			}
		}
	}

	/*free array anchored on the table instance*/
	free(ht -> array);
	/*free the table instance itself*/
	free(ht);

}

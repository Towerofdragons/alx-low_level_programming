#include "hash_tables.h"

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *curr;
	unsigned long int i;
	unsigned int first_printed_entry;

	first_printed_entry = 1;

	if (ht == NULL)
	{
		return;
	}

	printf("{");

	for (i = 0; i < ht -> size; i++)
	{
		if (ht -> array[i] == NULL)
		{
			continue;
		}
		else
		{
			curr = ht -> array[i];
			while(curr != NULL)
			{
				if (first_printed_entry == 0)
				{
					printf(", ");
				}

				first_printed_entry = 0;
				printf("'%s': '%s'", curr -> key, curr -> value);
				curr = curr -> next;
			}
		}
	}

	printf("}\n");
}

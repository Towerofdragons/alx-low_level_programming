#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;
	unsigned long int index;
	char *key;
    ht = hash_table_create(1024);
    hash_table_set(ht, "betty", "cool");
    hash_table_set(ht, "betty", "NEW!");
    hash_table_set(ht, "dram", "cool");
    hash_table_set(ht, "vivency", "cool");

     hash_table_set(ht, "Holberton", "is cool"); 
     hash_table_set(ht, "Holberton", "is soooo cooool"); 
     hash_table_set(ht, "Holberton", "is awesome");

     key = "Holberton";
     index = key_index((const unsigned char *)key, 1024);

	hash_table_set(ht, "C", "is fun");

     printf("Testing");
     printf("%s\n",ht -> array[index] ->value);
    return (EXIT_SUCCESS);
}

#include "hash_tables.h"

/**
* hash_table_create- a function that creates a hash table
*
* @size: size of the array
*
* Return: a pointer to the newly created hash table
*	  if an error occurs- NULL
**/

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *table;

	/* allocate memory for the new hash table */
	table = malloc(sizeof(hash_table_t));

	if (table == NULL)
		return (NULL);
	/* allocate memory to buckets */
	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);

	if (table->array == NULL)
		return (NULL);
	/* initialize all buckets to NULL */
	for (i = 0; i < table->size; i++)
		table->array[i] = NULL;
	return (table);
}

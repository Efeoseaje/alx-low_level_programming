#include "hash_tables.h"

/**
 * key_index - a function that gives the index of a key/value pair
 *
 * Description: uses the djb2 algorithm to find index
 *
 * @key: The key which we want to determine the index of
 * @size: Size of the array of the hash table
 *
 * Return: the index of the key/value pair.
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

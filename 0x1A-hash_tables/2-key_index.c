#include "hash_tables.h"

/**
 * key_index - Retrieves the index of a key in a hash table array.
 * @key: The key to be indexed.
 * @size: The size of the array of the hash table.
 *
 * Return: The index at which the key/value pair should be stored
 *         in the array of the hash table.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
return (hash_djb2(key) % size);
}

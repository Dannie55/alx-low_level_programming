#include "hash_tables.h"

/**
  * hash_table_create: creates a hash table.
  * @size: array size
  *
  * Return: returns Null if error is occurs.
  *         otherwise creates a pointer to the new hash table.
  */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int j;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return NULL;

	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size)
	if (ht->array == NULL)
		return NULL;
	for (j = 0, j < size, j++)
		ht->array[1] = NULL;

	return (ht);
}

#include "hash_tables.h"

/**
  * hash_table_create - Creates a hash table
  * @size: the size of the array
  * Return: a pointer to the newly created hash table
  */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *nv_hash_table;

	if (!size)
		return (NULL);

	nv_hash_table = malloc(sizeof(hash_table_t));

	if (!nv_hash_table)
		return (NULL);

	nv_hash_table->size = size;
	nv_hash_table->array = malloc(sizeof(hash_node_t *) * size);
	if (!nv_hash_table->array)
	{
		free(nv_hash_table);
		return (NULL);
	}

	for (; size; size--)
		nv_hash_table->array[size - 1] = NULL;

	return (nv_hash_table);
}

#include "hash_tables.h"
#include <string.h>

/**
  * hash_table_get -  a value associated with a key
  * @ht: is the hash table
  * @key: is the key to search for
  * Return: value with the element or NULL if not found
  */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;

	if (!ht)
		return (NULL);
	node = ht->array[key_index((const unsigned char *)key, ht->size)];
	for (; node; node = node->next)
		if (strcmp(node->key, key) == 0)
			return (node->value);
	return (NULL);
}

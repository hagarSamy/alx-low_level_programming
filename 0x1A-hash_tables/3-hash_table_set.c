#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table to add or update the key/value to
 * @key: the key
 * @value: value of th key
 *
 * Return: 1 if it succeeded, 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *newNode = (hash_node_t *)malloc(sizeof(hash_node_t));

	if (newNode != NULL)
	{
		newNode->key = (char *)strdup(key);
		newNode->value = (char *)strdup(value);
		newNode->next = NULL;
	}
	else
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	if (ht->array[idx] == NULL)
	{
		ht->array[idx] = newNode;
	}
	else
	{
		newNode->next = ht->array[idx];
		ht->array[idx] = newNode;
	}
	return (1);
}

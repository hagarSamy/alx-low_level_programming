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
	hash_node_t *newNode;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);

	newNode =  (hash_node_t *)malloc(sizeof(hash_node_t));
	if (newNode == NULL)
		return (0);

	newNode->key = strdup(key);
	newNode->value = strdup(value);
	if (newNode->key == NULL || newNode->value == NULL)
	{
		free(newNode);
		return (0);
	}

	newNode->next = ht->array[idx];
	ht->array[idx] = newNode;
	return (1);
}

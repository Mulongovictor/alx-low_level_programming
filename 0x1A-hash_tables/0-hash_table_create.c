#include "hash_tables.h"

/**
 * hash_table_create - function to create a hash table
 * @size: Size of the array
 * Return: Null for error or a pointer to a new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i;

	table = (hash_table_t *) malloc(sizeof(hash_table_t));
	if (table == NULL)
	{
		return (NULL);
	}
	table->size = size;
	table->array = (hash_node_t **)malloc(sizeof(hash_node_t *) * size);
	if (table->array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < table->size; i++)
	{
		table->array[i] = NULL;
	}
	return (table);
}

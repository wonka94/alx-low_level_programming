#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: pointer to the hash table
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *table = ht;
	hash_node_t *current_node, *temp_node;
	unsigned long int index;

	for (index = 0; index < ht->size; index++)
	{
		if (ht->array[index] != NULL)
		{
			current_node = ht->array[index];
			while (current_node != NULL)
			{
				temp_node = current_node->next;
				free(current_node->key);
				free(current_node->value);
				free(current_node);
				current_node = temp_node;
			}
		}
	}
	free(table->array);
	free(table);
}

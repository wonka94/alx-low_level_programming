#include "hash_tables.h"

/**
 * delete_hash_table - deletes a hash table
 * @ht: pointer to the hash table
 *
 * Return: void
 */
void delete_hash_table(hash_table_t *ht)
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

#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: pointer to the hash table
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
    if (ht == NULL)
    {
        return;
    }

    printf("{");
    for (hash_node_t *node = ht->array[0]; node != NULL; node = node->next)
    {
        if (node != ht->array[0])
        {
            printf(", ");
        }
        printf("'%s': '%s'", node->key, node->value);
    }
    printf("}\n");
}

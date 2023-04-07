#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: A pointer to the hash table to print.
 *
 * Description: Key/value pairs are printed in the order
 *              they appear in the array of the hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;
	unsigned char flag = 0;

	if (ht == NULL) {
        return;
    }

    printf("{\n");
    for (int i = 0; i < ht->size; i++) {
        hash_node_t *node = ht->array[i];
        if (node != NULL) {
            printf("  [%d]: ", i);
            while (node != NULL) {
                printf("(%s, %s) ", node->key, node->value);
                node = node->next;
            }
            printf("\n");
        }
    }
    printf("}\n");

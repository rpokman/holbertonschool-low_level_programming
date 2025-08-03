#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table
 * @key: the key (non-empty string)
 * @value: the value (will be duplicated)
 *
 * Return: 1 if success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    hash_node_t *new_node, *tmp;
    char *value_copy;
    unsigned long int index;

    if (!ht || !key || !*key || !value)
        return (0);

    index = key_index((const unsigned char *)key, ht->size);
    tmp = ht->array[index];

    while (tmp)
    {
        if (strcmp(tmp->key, key) == 0)
        {
            free(tmp->value);
            tmp->value = strdup(value);
            return (tmp->value ? 1 : 0);
        }
        tmp = tmp->next;
    }

    new_node = malloc(sizeof(hash_node_t));
    if (!new_node)
        return (0);

    new_node->key = strdup(key);
    value_copy = strdup(value);
    if (!new_node->key || !value_copy)
    {
        free(new_node->key);
        free(new_node);
        return (0);
    }

    new_node->value = value_copy;
    new_node->next = ht->array[index];
    ht->array[index] = new_node;

    return (1);
}

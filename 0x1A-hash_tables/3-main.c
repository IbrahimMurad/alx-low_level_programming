#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;
    int val;

    ht = hash_table_create(1024);
    val = hash_table_set(ht, "1", NULL);
    printf("%d\n", val);
    return (EXIT_SUCCESS);
}
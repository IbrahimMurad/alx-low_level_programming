#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = get_bit(1024, 10);
    printf("%d\n", n);
    n = get_bit(98, 1);
    printf("%d\n", n);
    n = get_bit(1024, 0);
    printf("%d\n", n);
    n = get_bit(73, 0);
    printf("%d\n", n);
    n = get_bit(73, 1);
    printf("%d\n", n);
    n = get_bit(73, 2);
    printf("%d\n", n);
    n = get_bit(73, 3);
    printf("%d\n", n);
    n = get_bit(73, 4);
    printf("%d\n", n);
    n = get_bit(73, 5);
    printf("%d\n", n);
    n = get_bit(73, 6);
    printf("%d\n", n);
    n = get_bit(73, 7);
    printf("%d\n", n);
    n = get_bit(73, 63);
    printf("%d\n", n);
    return (0);
}

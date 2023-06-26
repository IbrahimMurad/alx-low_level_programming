
/**
 *  _putchar - writes the character c to stdout
 *  @c: The character to print
 *  Return: On success 1.
 *  On error, -1 is returned, and errno is set appropriately.
 */
#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

int _putchar(char c);

void reset_to_98(int *n);

void swap_int(int *a, int *b);

int _strlen(char *s);

void _puts(char *str);

void print_rev(char *s);

void rev_string(char *s);

void puts2(char *str);

#endif /* MAIN_H */

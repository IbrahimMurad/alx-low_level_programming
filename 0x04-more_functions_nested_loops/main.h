
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

int _isupper(int c);

int _isdigit(int c);

int mul(int a, int b);

void print_numbers(void);

void print_most_numbers(void);

void print_line(int n);

void more_numbers(void);

void print_diagonal(int n);

void print_square(int size);

#endif /* MAIN_H */

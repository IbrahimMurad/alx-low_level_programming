
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

void print_alphabet(void);

void print_alphabet_x10(void);

int _islower(int c);

int _isalpha(int c);

int print_sign(int n);

int _abs(int n);

#endif /* MAIN_H */

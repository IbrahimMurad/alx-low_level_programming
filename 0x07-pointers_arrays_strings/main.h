
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

char *_memset(char *s, char b, unsigned int n);

char *_memcpy(char *dest, char *src, unsigned int n);

char *_strchr(char *s, char c);

unsigned int _strspn(char *s, char *accept);

char *_strpbrk(char *s, char *accept);

char *_strstr(char *haystack, char *needle);

#endif /* MAIN_H */

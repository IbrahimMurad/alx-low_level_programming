#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s = "hello, world";
    char *t;

	t = _strstr(s, "hello, world");
	printf("%s\n", t);
	t = _strstr(s, "hello");
	printf("%s\n", t);
	t = _strstr(s, "world");
	printf("%s\n", t);
	t = _strstr(s, "o");
	printf("%s\n", t);
	t = _strstr(s, ", ");
	printf("%s\n", t);
	t = _strstr(s, "");
	printf("%s\n", t);
	t = _strstr("", "h");
	printf("%s\n", t);
	return (0);
}
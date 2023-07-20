#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * discard_other_chars - discards all characters other than
 * c, i, f, s from a string
 * @s: the given string
 * @len: a pointer to the length of the new string
 *
 * Return: a string with only the allowed characters
 */

char *discard_other_chars(const char * const s, unsigned int *len)
{
	unsigned int i = 0, j = 0;
	char *temp;

	temp = malloc(strlen(s) + 1);
	i = 0;
	while (s[i])
	{
		switch (s[i])
		{
			case 'c':
			case 'i':
			case 'f':
			case 's':
				temp[j] = s[i];
				j++;
				break;
			default:
				break;
		}
		i++;
	}
	temp[j] = '\0';
	*len = j;
	return (temp);
}


/**
 * my_print_str - prints the passed string and if it is NULL prints "(nil)"
 * @s: the passed string
 *
 * Return: Nothing
 */

void my_print_str(char *s)
{
	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

/**
 * print_all - prints anything passed to it
 * @format: a string where each character indicates to a type
 * for the passed arguments to be printed
 *
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0, len = 0;
	char *temp_format = discard_other_chars(format, &len);

	va_start(args, format);
	while (temp_format[i])
	{
		switch (temp_format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				my_print_str(va_arg(args, char *));
				break;
			default:
				break;
		}
		if (i < len - 1)
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
	va_end(args);
}

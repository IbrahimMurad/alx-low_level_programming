#include <stdarg.h>
#include <string.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * fun - prints the passed string
 * @s: the passed string to be printed
 *
 * Return: Nothing
 */

void fun(const char *s)
{
	printf("%s", s);
}

/**
 * printing - prints the two passed string
 * and if the second onw is NULL, it prints the first only
 * @s: the first string
 * @sep: the second string
 * @fun: a pointer to the function that prints the passed strings
 *
 * Return: Nothing
 */

void printing(char *s, const char *sep, void (*fun)(const char *))
{
	if (sep == NULL)
	{
		fun(s);
	}
	else
	{
		fun(s);
		fun(sep);
	}
}

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: the string to be printed between strings
 * @n: the number of passed strings
 *
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *temp;
	va_list args;
	void (*fun_ptr)(const char *) = &fun;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		temp = va_arg(args, char *);
		if (i < n - 1)
		{
			if (temp == NULL)
			{
				printing("(nil)", separator, fun_ptr);
			}
			else
			{
				printing(temp, separator, fun_ptr);
			}
		}
		else
		{
			if (temp == NULL)
			{
				printing("(nil)", "\n", fun_ptr);
			}
			else
			{
				printing(temp, "\n", fun_ptr);
			}
		}
			
	}
}

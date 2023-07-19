#include "function_pointers.h"

/**
 * print_name - prints a name.
 * @name: the name to print
 * @f: a pointer to a function that prints the name in a specific way
 *
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
	{
		f("");
	}
	else
	{
		f(name);
	}
}

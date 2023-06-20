#include "main.h"

/**
 * print_alphabet - writes all the alphabets in lower case to scrren
 * Return: void
 */
void print_alphabet(void);

/**
 * main - entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	int i;
	for(i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

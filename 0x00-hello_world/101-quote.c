#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * This program prints a message to the standard errer
 *
 * Return: Always 1 (error)
 */
int main(void)
{
	char *msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	
	fwrite(msg, sizeof(char), strlen(msg), stderr);
	return (1);
}

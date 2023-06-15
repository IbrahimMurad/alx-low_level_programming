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
	char *er_msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	
	fwrite(er_msg, sizeof(char), strlen(er_msg), stderr);
	return (1);
}

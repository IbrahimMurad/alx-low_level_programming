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
	char *err_msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	fwrite(err_msg, sizeof(char), strlen(err_msg), stderr);
	return (1);
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates a random valid password for 101-crackme
 *
 * Return: Always 0
 */

int main(void)
{
	char password[10];
	int i;

	srand(time(NULL));
	for (i = 0; i < 10; i++)
	{
		password[i] = (rand() % (127 - 33)) + 33;
	}
	
	printf("%s", password);

	return (0);
}

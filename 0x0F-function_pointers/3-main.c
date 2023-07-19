#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point
 * @argc: stores the number of passed arguments including the prog excution
 * @argv: an array of strings that stores the passed arguments
 *
 * Return: 0 for success
 * 98 for wrong number of arguments
 * 99 for not listed  operators
 * 100 for dividing by 0
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	int (*op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = get_op_func(argv[2]);
	if (op == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((!strcmp(argv[2], "/") || !strcmp(argv[2], "%")) && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", op(num1, num2));
	return (0);
}

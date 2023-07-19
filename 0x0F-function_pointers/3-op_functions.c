#include "3-calc.h"

/**
 * op_add - adds two integers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: the sum of the two integers
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substracts two integers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: the difference of the two integers
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: the product of the two integers
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two integers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: the division of the two integers
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - the reminder of the division
 * @a: the first integer
 * @b: the second integer
 *
 * Return: the reminder of dividing of the two integers
 */

int op_mod(int a, int b)
{
	return (a % b);
}

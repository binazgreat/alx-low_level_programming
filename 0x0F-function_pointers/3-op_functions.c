#include "3-calc.h"
/**
 * op_add - adds two numbers.
 * @a: First number
 * @b: Second number
 *
 * Return: Add
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subctracts two numbers.
 * @a: First number
 * @b: Second number
 *
 * Return: Differnce
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplies two numbers.
 * @a: First number
 * @b: Second number
 *
 * Return: Multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides two numbers.
 * @a: First number
 * @b: Second number
 *
 * Return: Division
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - calculates the module of two numbers.
 * @a: First number
 * @b: Second number
 *
 * Return: remainder of the division.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

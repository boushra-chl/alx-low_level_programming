#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - functions that calculates the sum of two integers
 * @a: first integer
 * @b: second integer
 * Return: integer, sum of two numbers
 */
int op_add(int a, int b)
{
	int sum = 0;
	
	sum = a + b;
	return (sum);
}

/**
 * op_sub - calculates the difference between two integers
 * @a: first integer
 * @b: second integer
 * Return: integer, the difference between the two
 */
int op_sub(int a, int b)
{
	int sub = 0;

	sub = a - b;
	return (sub);
}

/**
 * op_mul - calculates the multiplication of two integers
 * @a: first integer
 * @b: second integer
 * Return: integer, multiplication of a and b
 */
int op_mul(int a, int b)
{
	int mul = 0;

	mul = a * b;
	return (mul);
}

/**
 * op_div - calculates the division of two integers
 * @a: first integer
 * @b: second integer
 * Return: integer, result of division
 */
int op_div(int a, int b)
{
	int div = 0;

	div = a / b;
	return (div);
}

/**
 * op_mod - calculates the remainder of the division of two integers
 * @a: first integer
 * @b: second integer
 * Return: integer, remainder
 */
int op_mod(int a, int b)
{
	int mod = 0;

	mod = a % b;
	return (mod);
}

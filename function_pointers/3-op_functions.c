#include "3-calc.h"
#include "function_pointers.h"

/**
 * op_add - function to add
 * @a: input 1
 * @b: input 2
 * Return: sum a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function to subtract
 * @a: input 1
 * @b: input 2
 * Return: diffeerence of a and bn
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function to multiplies
 * @a: input 1
 * @b: input 2
 * Return: product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function to div
 * @a: input 1
 * @b: input 2
 * Return: division of a by b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - function to mod
 * @a: input 1
 * @b: input 2
 * Return: remainder of the division of a and b
 */

int op_mod(int a, int b)
{
	return (a % b);
}

#include "main.h"

/**
 * prime - search prime number
 *
 * @n: number value
 * @a: number
 *
 * Return: Integer
 */

int prime(int n, int a)

{
	if ((n > a) && (n % a == 0))
		return (0);

	else if (n == a)
		return (1);

	else
		return (prime(n, a + 1));
}

/**
 * is_prime_number - Write a function that returns 1 if the input.
 *
 * @n: prime number
 *
 * Return: Integer
 */

int is_prime_number(int n)
{

	if (n <= 1)
		return (0);

	return (prime(n, 2));
}

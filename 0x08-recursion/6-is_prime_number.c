#include "main.h"

int tool(int a, int b);


/**
 * is_prime_number - checks if an input figure is a prime number or not
 * @n: number to check
 *
 * Return: 1 if prime otherwise 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (tool(n, n - 1));
}


/**
 * tool - calculates if a number is prime
 * @n: number to check
 * @i: int
 *
 * Return: 1 if n is prime else 0
 */
int tool(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (tool(n, i - 1));
}

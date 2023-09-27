#include "main.h"


/**
 * tool - finds the natural square root of a number
 * @a:inter
 * @b: integer
 *
 * Return: the square root
 */
int tool(int a, int b)
{
	if (a * a > b)
		return (-1);
	if (a * a == b)
		return (a);
	return (tool(a + 1, b));
}



/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: integer to be computed
 *
 * Return: -1 if n has not a natural number
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (tool(1, n));
}

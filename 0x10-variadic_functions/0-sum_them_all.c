#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all -  returns the sum of all its parameters.
 * @n: unsigned int
 *
 * Return: sum of parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	int sm = 0;
	unsigned int e;
	va_list pars;

	va_start(pars, n);

	if (n == 0)
		return (0);

	for (e = 0; e < n; e++)
		sm += va_arg(pars, int);

	va_end(pars);

	return (sm);
}

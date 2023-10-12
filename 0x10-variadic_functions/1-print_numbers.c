#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: seprator
 * @n: parameters
 *
 * Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int e;
	va_list par;

	va_start(par, n);

	if (separator == NULL)
		separator = "";

	for (e = 0; e < n; e++)
	{
		printf("%d", va_arg(par, int));
		if (e < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(par);
}


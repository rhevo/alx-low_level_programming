#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints strings, followed by new line
 * @separator: separator
 * @n: parameters
 *
 * Return: 0
 */
void print_strings(const char *separator, unsigned int n, ...)
{
	const char *str;
	unsigned int e;
	va_list par;

	va_start(par, n);

	if (separator == NULL)
		separator = "";

	for (e = 0; e < n; e++)
	{
		str = va_arg(par, const char *);
		if (str == NULL)
		{
			str = ("(nil)");
		}
		else
		{
		printf("%s", str);
		}
		if (e < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(par);

	printf("\n");
}

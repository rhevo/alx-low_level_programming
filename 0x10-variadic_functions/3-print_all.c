#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: operations
 *
 * if the string is NULL, print (nil)
 * any other char should be ignored
 * Return: void
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	const char *sep = "";
	char *p;
	va_list par;

	va_start(par, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", sep, va_arg(par, int));
				break;
			case 'i':
				printf("%s%d", sep, va_arg(par, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(par, double));
				break;
			case 's':
				p = va_arg(par, char *);
				if (!p)
					p = ("(nil)");
				printf("%s%s", sep, p);
				break;
			default:
				break;
		}
		sep = ", ";
		i++;
	}
	va_end(par);

	printf("\n");
}

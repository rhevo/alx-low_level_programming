#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @c: char
 * @i: integer
 * @f: float
 * @s: char *
 *
 * Return: if the string is NULL, print (nil)
 * any other char should be ignored
 */
void print_all(const char *, const format, ...)
{
	va_list par;
	va_start(par, format);

	int i = 0;
	char c;
	int numb;
	char *s;
	float f;

	while (format && format[i])
	{
		c = (char)va_arg(par, int);
		printf("%c", c);
	}
	else if (format[i] == 'i')
	{
		numb = va_arg(par, int);
		printf("%d", numb);
	}
	else if (format[i] == 's')
	{
		s = va_arg(par, char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
	}
	else if (format[i] == 'f')
	{
		f = (float)va_arg(par, double);
		printf("%f", f);
	}
	if (format[i+1])
	{
		printf(", ");
	i++;
	}

	va_end(par);
	printf("\n");
}

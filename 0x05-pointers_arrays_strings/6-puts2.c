#include "main.h"

/**
 * puts2 - prints every other character of a string, starting with the
 * first character
 *
 * @str: input
 *
 * Return: Always 0
 */
void puts2(char *str)
{
	int lon = 0;
	int t = 0;
	char *y = str;
	int o;

	while (*y != '\0')
	{
		y++;
		lon++;
	}
	t = lon - 1;
	for (o = 0 ; o <= t ; o++)
	{
		if (o % 2 == 0)
	{
		_putchar(str[o]);
	}
	}
	_putchar('\n');
}


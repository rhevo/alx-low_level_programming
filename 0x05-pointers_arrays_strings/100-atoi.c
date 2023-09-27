#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int i, d, n, vyn, o, y;

	i = 0;
	d = 0;
	n = 0;
	vyn = 0;
	o = 0;
	y = 0;

	while (s[vyn] != '\0')
		vyn++;

	while (i < vyn && o == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			y = s[i] - '0';
			if (d % 2)
				y = -y;
			n = n * 10 + y;
			o = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			o = 0;
		}
		i++;
	}

	if (o == 0)
		return (0);

	return (n);
}

#include "main.h"

/**
 * binary_to_unit -- converts a binary number to an unsigned  int
 *
 * @b: pointing to a string of 0 and 1 chars
 * Return: The converted number, 0
 */
unsigned int binary_to_uint(const char *b)
{
	int e;
	unsigned int res;

	res = 0;
	if (b == NULL)
		return (0);

	for (e = 0; b[e] != '\0'; ++e)
	{
		if (b[e] != '0' && b[e] != '1')
			return (0);
		res = (res <<1) | (b[e] - '0');
	}

	return (res);
}



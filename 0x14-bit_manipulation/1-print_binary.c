#include "main.h"

/**
 * print_binary -- prints binary representation of a number
 * @n: long int
 *
 * Return: converted number, 0
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	char flag = 0;

	while (mask > 0)
	{
		if (n & mask)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag || mask == 1)
		{
			_putchar('0');
		}
		mask >>= 1;
	}
}

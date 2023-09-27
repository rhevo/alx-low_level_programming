#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints all possible combinations of two two-digit numbers.
 *
 * Return: Always 0
 */
int main(void)
{
	int e, u;

	for (e = 0; e < 100; e++)
	{
		for (u = 0; u < 100; u++)
		{
			if (e < u)
			{
				putchar((e / 10) + 48);
				putchar((u % 10) + 48);
				putchar(' ');
				putchar((u / 10) + 48);
				putchar((u % 10) + 48);
				if (e != 98 || u != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}

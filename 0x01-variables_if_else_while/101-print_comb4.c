#include <stdio.h>
#include <stdlib.h>
/**
 * main -Prints all possible different combinations of three digits.
 *
 * Return: Aalways 0
 */
int main(void)
{
	int fnum, snum, tnum;

	for (fnum = 0; fnum < 8; fnum++)
	{
		for (snum = fnum + 1; snum < 9; snum++)
		{
			for (tnum = snum + 1; tnum < 10; tnum++)
			{
				putchar((fnum % 10) + '0');
				putchar((snum % 10) + '0');
				putchar((tnum % 10) + '0');

				if (fnum == 7 && snum == 8 && tnum == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}

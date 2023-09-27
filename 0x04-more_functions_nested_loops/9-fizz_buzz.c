#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the numbers from 1 to 100
 * Fizz for multiples of 3, Buzz for multiples of 5
 * FizzBuzz for multiples of 3 and 5
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	n = 1;
	printf("%d", n);
	for (n = 2; n <= 100; n++)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
		{
			printf(" FizzBuzz");
		}
		else if (n % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (n % 5 == 0)
		{
			printf(" Buzz");
		}
		else
		{
			printf(" %d", n);
		}
	}
	printf("\n");
	return (0);
}

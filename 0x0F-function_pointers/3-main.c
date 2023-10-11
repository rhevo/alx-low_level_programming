#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>



/**
 * main - ...
 * @argc: ...
 * @argv: ...
 *
 * Return: ret
 */
int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int result;
	char *operator;
	int (*operation)(int, int);


	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	operator = argv[2];

	num2 = atoi(argv[3]);

	operation = get_op_func(operator);

	if (operation == NULL)
	{
		printf("Error\n");
		return (99);
	}

	if ((*operator == '/' || *operator == '%') && (num2 == 0))
	{
		printf("Error\n");
		return (100);
	}

	result = operation(num1, num2);
	printf("%d\n", result);

	return (0);
}

#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: char in focus
 *
 * Return: Always 0
 */
int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}

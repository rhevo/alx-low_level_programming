#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @n: number times constant b is copied
 * @s: memory area to be filled
 * @b: char to be copied
 *
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

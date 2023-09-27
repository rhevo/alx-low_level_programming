#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: pointer to destination buffer
 * @src: pointer to source buffer
 * @n: numberof bytes to copy
 *
 * Return: Pointer to destination buffer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

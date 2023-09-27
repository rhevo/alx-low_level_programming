#include "main.h"

/**
 * _strcat - appends the src string to the dest string
 * @src: char
 * @dest: char
 *
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest++ = '\0';
	return (s);
}

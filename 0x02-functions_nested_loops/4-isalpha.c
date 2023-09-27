#include "main.h"

/**
 * _isalpha - Checks for an alphabet either upper or lowercase.
 * @c: Character being checked
 *
 * Return: 1 if character is an alphabet, else 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

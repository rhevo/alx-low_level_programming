#include "main.h"

/**
 * get_bit -- returns value of a bit at a given index
 * @index: the index
 * @n: unsigned long int
 * Return: index, -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	return ((n >> index) & 1);
}

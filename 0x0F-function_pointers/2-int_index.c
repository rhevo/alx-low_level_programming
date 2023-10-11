#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @size: number of elements in the array
 * @array: the array
 * @cmp: test function
 * Return: the index of the first element for which the cmp function does
 * not return 0
 * -1 if no element matches
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int e = 0;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	for (e = 0; e < size; ++e)
	{
		if (cmp(array[e]))
			return (e);
	}
	return (-1);
}

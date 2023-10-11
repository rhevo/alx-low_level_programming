#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on each element
 * of an array.
 * @size: size of the array
 * @action: the pointer to the function to be used
 * @array: array writing function for
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void(*action)(int))
{
	size_t i;

	if (array && action)
	{
		i = 0;
		while (i < size)
		{
			action(array[i]);
			++i;
		}
	}
}

#include "function_pointers.h"
/**
 * int_index - Searchs for an integer
 * @array: Input integer array
 * @size: Size of array
 * @cmp: Pointer to the function to be used
 * to compare values
 *
 * Return: Index of the first element for which the cmp
 * function doesn't return 0. If no elements match
 * return -1. If size  <= 0, return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}
	return (-1);
}

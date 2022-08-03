#include "function_pointer"
/**
 * array_iterator - executes a function
 * @array: Input integer array
 * @size: Size of the array
 * @action: Pointer to the function
 *
 * Return: No return
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}

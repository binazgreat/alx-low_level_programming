#include "function_pointer"
/**
 * array_iterator - executes a function
 * @array: Input integer array
 * @size: Size of the array
 * @action: Pointer to the function
 *
 * Return: No return
 */
void print_name(char *name, void (*f)(char *))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}

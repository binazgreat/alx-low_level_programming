#include "main.h"
/**
 * swap - swaps the values of two integers
 * @a: Parameter 1
 * @b: Parameter 2
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

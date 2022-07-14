#include"main.h"
/**
 * reverse_array - reversing an array of integers
 * @a: Array a
 * @n: Element of array
 * Return: 0 (Success)
 */
void reverse_array(int *a, int n)
{
	int *p, i, aux, k;

	p = a;
	for (i = 1; i < n; i++)
		p++;
	for (k = 1; k < n / 2; k++) 
	{
		aux = a[k];
		a[k] = *p;
		*p = aux;
		p--;
	}
}

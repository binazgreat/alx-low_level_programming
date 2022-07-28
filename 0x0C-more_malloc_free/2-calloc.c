#include "main.h"
#include <stdlib.h>
/**
 * _calloc - Alloates memory for an array of certain number
 * of elements each of an inputted byte size
 * @nmemb:Number of elements
 * @size: Byte size of each array element
 *
 * Return: If nmemb = 0, size  = 0, or the function fails - NULL.
 * Otherwise - A pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *filler;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);
	mem = malloc(size * nmemb);
	if (mem == NULL)
		return (NULL);
	filler = mem;
	for (index = 0; index < (size * nmemb); index++)
		filler[index] = '\0';
	return (mem);
}

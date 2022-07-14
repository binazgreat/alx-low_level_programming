#include "main.h"
#include <string.h>
/**
 * _strncpy -copies the string
 * @dest: First parameter
 * @src: Second parameter
 * @n: Third parameter
 * Return: a string
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}

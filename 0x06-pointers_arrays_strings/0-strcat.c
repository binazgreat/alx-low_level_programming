#include "main.h"
/**
<<<<<<< HEAD
 * _strcat - a function that concatenatestwo strings
 * @dest: string 1
 * @src: string 2
=======
 * _strcat - a function strcat
 * @dest: first parameter
 * @src: second parameter
>>>>>>> bb2198bca3bf9eed6251963655ba59c7ecd25464
 * Return: a string
 */
char *_strcat(char *dest, char *src)
{
	int len = 0, i;

	while (dest[len])
		len++;
<<<<<<< HEAD
	for (i = 0; src[i] != 0; i++)
=======
	for (i = 0; src[i] != 0; i++;)
>>>>>>> bb2198bca3bf9eed6251963655ba59c7ecd25464
	{
		dest[len] = src[i];
		len += 1;
	}
	dest[len] = '\0';
	return (dest);
}

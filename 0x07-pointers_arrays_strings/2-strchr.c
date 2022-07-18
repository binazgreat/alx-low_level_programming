#include "main.h"
/**
 * _strchr - locates the character string
 * @s: string given
 * @c: another char
 * Return: a pointer to the first occurence of a character
 */
char *_strchr(char *s, char c)
{
	int a;

	while (1)
	{
		a = *s++;
		if (a == c)
		{
			return (s - 1);
		}
		if (a == 0)
		{
			return (NULL);
		}
	}
}

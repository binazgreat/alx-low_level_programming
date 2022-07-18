#include "main.h"
/**
 * _strchr - locates the character string
 * @s: source string
 * @c: chracter to find
 * Return: a string
 */
char *_strchr(char *s, char c)
{
	int a = 0, b;

	while (s[a])
	{
		a++;
	}
	for (b = 0; b <= a; b++)
	{
		if (c == s[a])
		{
			s += b;
			return (s);
		}
	}
	return ('\0')
}

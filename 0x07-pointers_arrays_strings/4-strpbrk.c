#include "main.h"
/**
 * _strpbrk - searchs a string for any set of bytes
 * @s: source string
 * @accept: accepted characters
 *
 * Return: the string starting from the first accepted chracter
 */
char *_strpbrk(char *s, char *accept)
{
	int a = 0, b;

	while (s[a])
	{
		b = 0;
		while (accept[b])
		{
			if (s[a] == accept[b])
			{
				s += a;
				return (s);
			}
			b++;
		}
		a++;
	}
	return ('\0');
}

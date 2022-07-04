#include <stdio.h>
/**
 * main - entry block
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; < 100; i++)
	{
		for (j = i + 1; j < 100; j++)
		{
			putchar(i / 10 + '0');
			putchar(i % 10 + '0');
			putcahr('');
			putchar(j / 10 + '0');
			putchar(j % 10 + '0');
			if (i != 98 || j != 99)
			{
				putchar(',');
				putchar('');
			}
		}
	}
	putchar('\n');
	return (0);
}

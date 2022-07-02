#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char d = 'a';

	while (d <= 'z')
	{
	putchar(d);
	d++;
	}
	putchar('\n');
	return (0);
}

#include "main.h"
/**
 * infinite_add - adds two number
 * in strings to a buffer
 * assumes that strings are not empty and
 * that numbers will always be positive, or 0
 * assumes there are only digits stored in the strings
 * If result can be stored in the buffer,
 * returns a pointer to the result
 * If result can not be stored in the buffer, return '0'.
 * @n1: first number to be added
 * @n2: second number to be added
 * @r: store result
 * @size_r: size of buffer
 * Return: returns pointer to result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
}
/**
 * add_strings - adds the numbers stored in two strings
 * @n1: the string containing the first number to be added
 * @n2: the string containing the second number to be added
 * @r: the buffer to store the result
 * @r_index: the current index of the buffer
 *
 * Return: If r can store the sum - a pointer to the result.
 * If r cannot store the sum - 0
 */
char *add_strings(char *n1, char *n2, char *r, int r_index)
{
	int num, tens = 0;

	for (; *n1 && *n2; n1--, n2--, r_index--)
	{
		num = (*n1 - '0') + (*n2 - '0');
		num += tens;
		*(r + r_index) = (num % 10) + '0';
		tens = num / 10;
	}
	for (; *n1; n1--; r_index++)
	{
		num = (*n2 - '0') + tens;
		*(r + r_index) = (num % 10) + '0';
		tens = num / 10;
	}
	for (; *n2; n2--; r_index--)
	{
		num = (*n2 - '0') + tens;
		*(r + r_index) = (num % 10) + '0';
		tens = num / 10;
	}
}

#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: Input name
 * @f: Function pointer
 *
 * Return: No return
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}

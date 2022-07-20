#include <unistd.h>
/**
 * _putchar - writes the character to stdout
 * @c: the character to print
 *
 * Return: 1 (Success)
 * On error, -1 is returned, and error n o is set apprpriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1))
}

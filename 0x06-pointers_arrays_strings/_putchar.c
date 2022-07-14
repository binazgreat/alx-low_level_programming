<<<<<<< HEAD
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 *
 * Return: 1 (success)
 * On error, -1 is returned, and error no is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
=======
#include <unistd.h> 
 /** 
  * _putchar - writes the character c to stdout 
  * @c: The character to print 
  * 
  * Return: 1(Success) 
  * On error, -1 is returned, and errno is set appropriately 
  */ 
 int _putchar(char c) 
 { 
         return (write(1, &c, 1)); 
 }
>>>>>>> bb2198bca3bf9eed6251963655ba59c7ecd25464

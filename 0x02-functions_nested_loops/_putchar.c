#include <unistd.h>

<<<<<<< HEAD
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
=======
int _putchar(char c){
	return(write(1, &c, 1));
>>>>>>> 9bec36fdd212b7d0f54c7888e161cab520abd712
}

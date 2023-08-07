#include "main.h"		
#include <unistd.h>

/**
 * _putchar - writes the char c to stdout
 * @c: The char to be printed
 *
 * Return: On success returns 1.
 *
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

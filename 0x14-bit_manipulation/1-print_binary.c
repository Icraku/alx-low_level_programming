#include "main.h"

/**
 * print_binary - Prints the binary rep of a given number
 * @bNum: number to be printed in binary
 *
 * Return: Nothing
 */
void print_binary(unsigned long int bNum)
{
	if (bNum > 1)
		print_binary(bNum >> 1);

	_putchar((bNum & 1) + '0');
}

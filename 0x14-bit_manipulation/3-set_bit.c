#include "main.h"

/**
 * set_bit - Sets the biy value at a given index to 1.
 * @ptr: a pointer to the bit
 * @ind: indec to set the value at, starting from 0.
 *
 * Return: -1 if error, 1 otherwise
 */
int set_bit(unsigned long int *ptr, unsigned int ind)
{
	if (ind >= (sizeof(unsigned long int) * 8))
		return (-1);
	*ptr ^= (1 << ind);
	return (1);
}

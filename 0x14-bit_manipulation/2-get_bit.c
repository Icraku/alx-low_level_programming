#include "main.h"

/**
 * get_bit - gets the bit value at a given index.
 * @bitN: the bit
 * @ind: the index of bit to het value feom starting from 0
 *
 * Return: -1 if error, otherwise the bit value
 */
int get_bit(unsigned long int bitN, unsigned int ind)
{
	if (ind >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((bitN & (1 << ind)) == 0)
		return (0);

	return (1);
}

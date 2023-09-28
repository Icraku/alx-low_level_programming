#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned integer
 * @b: A pointer to a string of 0's and 1's
 *
 * Return: 0,if b is NULL or contains chars not 0 or 1
 * Otherwise - returns converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int convertedInt = 0;
	unsigned int multiplier = 1;
	int strLen;

	if (*b == '\0')
		return (0);

	for (strLen = 0; b[strLen];)
		strLen++;

	for (strLen -= 1; strLen >= 0; strLen--)
	{
		if (b[strLen] != '0' && b[strLen] != '1')
			return (0);

		convertedInt += (b[strLen] - '0') * multiplier;

		multiplier *= 2;
	}

	return (convertedInt);
}

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
	unsigned int convertedNumber = 0;
	unsigned int multiplier = 1;
	int stringLength;

	if (*b == '\0')
		return (0);

	for (stringLength = 0; b[stringLength];)
		stringLength++;

	for (stringLength -= 1; stringLength >= 0; stringLength--)
	{
		if (b[stringLength] != '0' && b[stringLength] != '1')
			return (0);

		convertedNumber += (b[stringLength] - '0') * multiplier;
		multiplier *= 2;
	}

	return (convertedNumber);
}

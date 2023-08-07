#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of size size and assigns char c
 * @size: size of the array
 * @c: char to be assigned
 * Description: creates an array of size size and assigns char c
 * Return: pointer to array if success, NULL if fail
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int j;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (j = 0; j < size; j++)
		str[j] = c;
	return (str);
}

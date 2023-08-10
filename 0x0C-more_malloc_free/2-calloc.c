#include <stdlib.h>
#include "main.h"

/**
 * *_memset - fills memory space with a const byte.
 * @s: the memory space to be filled by a char
 * @b: the char to copy
 * @n: the no of times to copy the char b
 *
 * Return: pointer to the memory space.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}

/**
 * _calloc - allocates memory space for an array.
 * @nmemb: the no of elements in the array.
 * @size: the size of each element.
 *
 * Return: pointer to the allocated memory space.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);
	return (ptr);
}

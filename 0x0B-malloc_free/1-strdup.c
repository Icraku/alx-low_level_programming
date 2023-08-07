#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicates to new memory space location
 * @str: the char
 * Return: 0 on Success
 */
char *_strdup(char *str)
{
	char *xxx;
	int i, j = 0;

	if (str == NULL)
		return (NULL);

	i = 0;

	while (str[i] != '\0')
		i++;

	xxx = malloc(sizeof(char) * (i + 1));

	if (xxx == NULL)
		return (NULL);

	for (j = 0; str[j]; j++)
		xxx[j] = str[j];

	return (xxx);
}

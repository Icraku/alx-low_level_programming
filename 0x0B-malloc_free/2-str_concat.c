#include "main.h"
#include <stdlib.h>

/**
 * str_concat - gets ends of an input and adds them together for size
 * @s1: input one to be concatenated
 * @s2: inpit two to be concatenated.
 * Return: concatenated input of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *conCat;
	int f, cf;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	f = cf = 0;
	while (s1[f] != '\0')
		f++;
	while (s2[cf] != '\0')
		cf++;
	conCat = malloc(sizeof(char) * (f + cf + 1));

	if (conCat == NULL)
		return (NULL);

	f = cf = 0;

	while (s1[f] != '\0')
	{
		conCat[f] = s1[f];
		f++;
	}
	while (s2[cf] != '\0')
	{
		conCat[f] = s2[cf];
		f++, cf++;
	}
	conCat[f] = '\0';
	return (conCat);
}

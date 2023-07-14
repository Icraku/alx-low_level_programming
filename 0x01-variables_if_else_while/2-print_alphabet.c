/**
 * File: 2-print_alphabet.c
 * Auth: Brennan D Baraban
 */

#include <stdio.h>

/**
 * main - Program that prints the alphabet letters in lowercase.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}

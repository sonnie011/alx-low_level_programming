/*
 * File: 4-print_alphabt.c
 */

#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, except for q and e.
 *
 * Return: Always 0.
 */
int main(void)
{
	char C;

	for (C = 'a'; C <= 'z'; C++)
	{
		if (C != 'e' && C != 'q')
			putchar(C);
	}

	putchar('\n');

	return (0);
}

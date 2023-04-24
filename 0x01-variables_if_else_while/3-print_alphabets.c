/*
 * File: 2-print_alphabet.c
 * Auth: grace
 */

#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,and then in uppercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter <= 'A'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}

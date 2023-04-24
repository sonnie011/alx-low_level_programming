/*
 * File: 5-print_numbers.c
 * Auth: Grace
 */

#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0.
 *
 * Return: Always 0.
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar("%d", num);

	putchar("\n");

	return (0);
}

#include "main.h"
#include <stdio.h>

/**
 * _puts - function with one argument
 * @str: one char type argument
 *
 * main: print a string follow by a new line to stdout
 * Return: none
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

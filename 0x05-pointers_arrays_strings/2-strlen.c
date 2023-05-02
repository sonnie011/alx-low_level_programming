#include "main.h"
#include <stdio.h>

/**
 * _strlen - function with 1 argument
 * @s: char type pointer
 *
 * main: strlen similiar function to return length
 * Return: string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}

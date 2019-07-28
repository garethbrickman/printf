#include "holberton.h"

/**
 * _puts - function prints a string
 *
 *@str: char pointer
 *
 * Return: 0
 */

void _puts(char *str, int *j)
{
	while (*str)
	{
		_putchar(*str, j);
		str++;
	}
	_putchar('\n', j);
}

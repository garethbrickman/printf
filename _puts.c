#include "holberton.h"

/**
 * _puts - function prints a string
 * @str: char pointer
 * @k: counter through string
 * Return: 0
 */

void _puts(char *str, int *k)
{
	while (*str)
	{
		_putchar(*str, k);
		str++;
	}
}

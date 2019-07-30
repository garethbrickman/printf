#include "holberton.h"

/**
 * _rev_string - function reverses a string
 *
 *@s: char pointer
 *@k: counter through string
 * Return: *s
 */

void _rev_string(char *s, int *k)
{
	int len = _strlen(s);
	int mid = len / 2;
	int count = 0;
	char tmp;

	while (count < mid)
	{
		tmp = s[count];
		_putchar((s[count]), k);
		s[count] = s[len - count - 1];
		s[len - count - 1] = tmp;
		_putchar((s[len - count - 1]), k);
		count++;
	}
}

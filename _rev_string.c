#include "holberton.h"

/**
 * _rev_string - function reverses a string
 *
 *@s: char pointer
 *
 * Return: *s
 */

void _rev_string(char *s)
{
	int len = _strlen(s);
	int mid = len / 2;
	int count = 0;
	char tmp;

	while (count < mid)
	{
		tmp = s[count];
		s[count] = s[len - count - 1];
		s[len - count - 1] = tmp;
		count++;
	}
}

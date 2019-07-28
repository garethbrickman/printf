#include "holberton.h"

/**
 * _strlen - function returns length of a string
 *
 *@s: char point
 *
 * Return: 0
 */

int _strlen(const char *s)
{
	const char *copy_s = s;
	int dummy = 0;

	while (*copy_s != '\0')
	{
		dummy++;
		copy_s++;
	}
	return (dummy);
}

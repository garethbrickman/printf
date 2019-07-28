#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;

	len = _printf("Let's try to printf a simple sentence.\n");

	_printf("String:[%s]\n", "I am a string !");

	_printf("Character:[%c]\n", 'H');

	_printf("%%\n");
}

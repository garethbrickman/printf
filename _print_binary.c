#include"holberton.h"

/**
 * _print_binary - prints binary number from input
 * @n: The character to print
 * @k: counter through string
 *
 * Return: void
 */
void _print_binary(int n, int *k)
{
	while (n)
	{
		if (n & 1)
			_putchar('1', k);
		else
			_putchar('0', k);
		n >>= 1;
	}
}

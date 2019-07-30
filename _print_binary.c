#include"holberton.h"

/**
 * _print_binary - prints binary number from input
 * @n: The character to print
 * @k: counter through string
 *
 * Return: void
 */
void _print_binary(unsigned int n, int *k)
{
	unsigned int y;

	if (n == 0)
	{
		_putchar((n + '0'), k);
	}
	else if (n < 0)
	{
		n = n * (-1);
		_putchar(('-'), k);
		for (y = 1000000000; y > 0; y = y / 2)
		{
			if (n / y != 0)
				_putchar(((n / y) % 2 + '0'), k);
		}
	}
	else
	{
		for (y = 1000000000; y > 0; y = y / 2)
		{
			if (n / y != 0)
				_putchar(((n / y) % 2 + '0'), k);
		}
	}
}

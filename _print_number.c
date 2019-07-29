#include"holberton.h"

/**
 * _print_number - prints number from input
 * @n: The character to print
 * @k: counter through string
 *
 * Return: void
 */
void _print_number(int n, int *k)
{
	int y;

	if (n == 0)
		_putchar(((n / y) + '0'), k);

	if (n < 0)
		n = n * (-1);
	for (y = 1000000000; y > 0; y = y / 10)
	{
		if (n / y != 0)
			_putchar(('-'), k);
			_putchar(((n / y) % 10 + '0'), k);
	}
	else
		for (y = 1000000000; y > 0; y = y / 10)
		{
			if (n / y != 0)
				_putchar(((n / y) % 10 + '0'), k);
		}
}

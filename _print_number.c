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
	int y = 1000000000;
	int x, z;

	for (x = 0; x < 10; x++)
	{
		if ((n / y) == 0 && z == 0)
		{
			y = (y / 10);
			continue;
		}
		else if (z == 0)
		{
			_putchar(((n / y) + '0'), k);
			z++;
		}
		else
		{
			_putchar (((n / y) % 10 + '0'), k);
		}
		y = (y / 10);
	}
}

#include "holberton.h"
/**
 * rot13 - function that encodes a string using rot13
 * @s: string
 * @k: counter through string
 * Return: void
 */
void rot13(char *s, int *k)
{
	int i, j;
	char *letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != 0; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
			if (s[i] == letters[j])
			{
				s[i] = rot[j];
				_putchar((s), k);
				break;
			}
	}
}

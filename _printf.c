#include "holberton.h"
/**
 * _printf - is a function that formats and prints data
 * @format:
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	const char *p;
	unsigned int i, j;
	va_list conspec;
	char *s;

	va_start(conspec, format);
	for (p = format; *p != '\0'; p++)
	{
		if  (*p != '%')
		{
			_putchar(*p);
			continue;
		}
		p++;
	}
	switch(*p)
	{
	case 'c':
		i = va_arg(conspec, int);
		_putchar(i);
		break;
	case 's':
		s = va_arg(conspec, char *);
		_puts(s);
		break;
	case '%':
		_putchar('%');
		break;
	}
	j = _strlen(p);
	va_end(conspec);
	return (j);
}

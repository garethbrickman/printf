#include "holberton.h"
/**
 * _printf - is a function that formats and prints data
 * @format: format of data
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	const char *p;
	unsigned int i;
	int k = 0;
	va_list conspec;
	char *s;

	if (!format)
	{
		return (-1);
	}
	va_start(conspec, format);
	for (p = format; *p != '\0'; p++)
	{
		if (*p != '%')
		{
			_putchar(*p, &k);
			continue;
		}
		p++;
		switch (*p)
		{
		case 'c':
			i = va_arg(conspec, int);
			_putchar(i, &k);
			break;
		case 's':
			s = va_arg(conspec, char *);
			_puts(s, &k);
			break;
		case '%':
			_putchar('%', &k);
			break;
		}
	}
	va_end(conspec);
	return (k);
}

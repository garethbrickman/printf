#include "holberton.h"
/**
 * _printf - is a function that formats and prints data
 * @:
 * Return:
 */
int _printf(const char *format, ...)
{
	char *p;
	unsigned int i;
	va_list conspec;
	char *s;

	va_start(conspec, format);
	for (p = format; *p != '\0'; p++)
	{
		while (p != '%')
		{
			_putchar(*p);
			p++;
		}
		p++;
	}
	switch(*p);
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
	va_end(conspecs);
}

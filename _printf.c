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
	(

	va_end;
}

#include "main.h"
#include <stdarg.h>

/**
 * _printf - Function for produces output according to a format
 * @format: List of parameters to traverse
 * Return: printf result
 */

int _printf(const char *format, ...)
{
	int i = 0, count = 0;
	va_list valist;
	int (*p)(va_list);

	va_start(valist, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			p = get_op_print(format + i);

			if (p != NULL)
			{
				count += p(valist);
				i++;
			}
			else
			{
				_putchar(format[i]);
				count++;
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
		i++;
	}
	va_end(valist);

	return (count);
}

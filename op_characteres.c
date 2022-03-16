#include "main.h"

/**
 * op_t_c - Character input (c)
 * @valist: parameter input character
 * Return: print requested character
 */
int op_t_c(va_list valist)
{
	char c;

	c = va_arg(valist, int);
	_putchar(c);
	return (1);
}
/**
 * op_t_s - Character input (s)
 * @valist: parameter input
 * Return: Print requested string
 */
int op_t_s(va_list valist)
{
	char *p;
	int i = 0;

	p = va_arg(valist, char *);

	if (p == NULL)
		p = "(null)";

	while (p[i] != '\0')
	{
		_putchar(p[i]);
		i++;
	}

	return (i);
}
/**
 * op_t_percent - Character input (%)
 * @valist: paramater input
 * Return: print %
 */
int op_t_percent(va_list valist)
{
	(void) valist;

	_putchar('%');
	return (1);
}

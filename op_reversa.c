#include "main.h"

/**
 * op_t_reversed - Character input (r)
 * @valist: parameter input character
 * Return: the number of digit print
 */

int op_t_reversed(va_list valist)
{
	int i, count = 0;
	char *s = va_arg(valist, char *);

	while (s[count] != '\0')
		count++;

	for (i = count - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	return (count);
}

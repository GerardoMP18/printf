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
		_putchar(s[i]);
	}
	return (count);
}

/**
 * rot_13 - Character input (R)
 * @valist: parameter input character
 * Return: the number of digit print
 */

int rot_13(va_list valist)
{
	int i;
	int j;
	char *s = va_arg(valist, char *);
	char u1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char l1[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
	for (j = 0; j < 52; j++)
	{
		if (s[i] == u1[j])
		{
			_putchar(l1[j]);
			break;
		}
	}
	if (j == 52)
		_putchar(s[i]);
	}
	return (i);
}

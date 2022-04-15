#include "main.h"

/**
 * get_op_print - Function for produce output according to a format
 * @format: List of parameters to traverse.
 * Return: Gets the character according to the list of
 * characters to be used.
 */

int (*get_op_print(const char *format))(va_list)
{
	int a;

	op_t characteres[] = {
		{"c", op_t_c},
		{"s", op_t_s},
		{"%", op_t_percent},
		{"d", op_t_di},
		{"i", op_t_di},
		{"b", op_t_binary},
		{"r", op_t_reversed},}
		{NULL, NULL}
	};

	a = 0;

	while (characteres[a].op)
	{
		if (*(characteres[a].op) == format[1])
		{
			return (characteres[a].f);
		}
		a++;
	}

	return (characteres[a].f);
}

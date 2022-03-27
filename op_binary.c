#include "main.h"

/**
 * op_t_binary - Character input ( b )
 * @valist: paramater input
 * Return: print binary
 */
int op_t_binary(va_list valist)
{
	int i = 0;
	unsigned int numero = va_arg(valist, int);

	i = binary_recursive(numero);
	return (i);
}
/**
 * binary_recursive - function for convert number in binary
 * @n: input number
 * Return: convert number in binary
 */
int binary_recursive(unsigned int n)
{
	int resultado = 0;

	if (n > 1)
	{
		resultado += binary_recursive(n >> 1);
	}
	if (n & 1)
	{
		resultado = _putchar('1');
	}
	else
	{
		resultado = _putchar('0');
	}
	return (resultado);
}

#ifndef PRINT_F
#define PRINT_F
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>


/**
 * struct op - printf structure
 * @op: pointer
 * @f: pointer
 */

typedef struct op
{
	char *op;
	int (*f)(va_list valist);
} op_t;


int _putchar(char c);
int _printf(const char *format, ...);
int op_t_c(va_list valist);
int op_t_s(va_list valist);
int op_t_percent(va_list valist);
int op_t_di(va_list valist);
int op_t_binary(va_list valist);
int binary_recursive(unsigned int n);
int op_t_reversed(va_list valist);
int rot_13(va_list valist);
int (*get_op_print(const char *format))(va_list);
#endif

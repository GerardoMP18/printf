#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
        int len;
        int len2;


        len = _printf("Character:[%c]\n", 'H');
        len2 = printf("Character:[%c]\n", 'H');
        printf("Length:[%d, %i]\n", len, len);
        printf("Length:[%d, %i]\n", len2, len2);
        len = _printf("String:[%s]\n", "I am a string !");
        len2 =printf("String:[%s]\n", "I am a string !");
        printf("Len:[%d]\n", len);
        printf("Len:[%d]\n", len2);
        len = _printf("Percentttt:[%%]\n");
        len2 = printf("Percentttt:[%%]\n");
        printf("Len 1:[%d]\n", len);
        printf("Len 2:[%d]\n", len2);
        len = _printf("Percent:[%%]\n");
        len2 = printf("Percent:[%%]\n");
        printf("Len:[%d]\n", len);
        printf("Len:[%d]\n", len2);
        return (0);
}

#include "main.h"
#include <stdarg.h>

/**
 * print_binary - Prints a binary representation of an unsigned integer.
 * @list: The unsigned integer to print in binary.
 *
 * Return: The number of characters printed.
 */
int print_binary(va_list list)
{
char *p_buff;
int size;

p_buff = to_string(va_arg(list, unsigned int), 2);

size = print(p_buff);

return (size);
}

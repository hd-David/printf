#include "main.h"
#include <stdarg.h>

/**
 * print_binary - Prints a binary representation of an unsigned integer.
 * @n: The unsigned integer to print in binary.
 *
 * Return: The number of characters printed.
 */
int print_binary(unsigned int n)
{
int count = 0;

if (n > 1)
count += print_binary(n / 2);
count += _putchar((n % 2) + '0');

return (count);
}

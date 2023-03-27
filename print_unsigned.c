#include "main.h"

/**
 * print_unsigned - print a unsigned int.
 * @list: Number to print
 *
 *Return: length of the number
 */

int print_unsigned(va_list list)
{
  char *str_num = to_string(va_arg(list, unsigned int), 10);
  int size = 0;
  if (str_num == NULL)
    str_num = "(null)";
  for (int i = 0; str_num[i] != '\0'; i++)
    size += _putchar(str_num[i]);
  return (size);
}

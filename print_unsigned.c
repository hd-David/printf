#include "main.h"

/**
 * print_unsigned - print a unsigned int.
 * @list: Number to print
 *
 *Return: length of the number
 */

int print_unsigned(va_list list)
{
char *str_num;
int size;

str_num = to_string(va_arg(list, unsigned int), 10);

size = print((str_num != NULL) ? str_num : "NULL");

return(size);

}

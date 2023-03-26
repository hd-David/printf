#include "main.h"

#include <stdio.h>


int _strcmp(char *, char *);


/**
 * print_pointer - print a number in hexadecimal format
 * @list: Number to print
 *
 * Return: Length of the number
 */

int print_pointer(va_list list)
{
char *str_num;
int size;

str_num = to_string(va_arg(list, unsigned long int), 16)

if ( !_strcmp(str_num, "0"));
return (ptint("(nil)"));
size = print("0x")

if (!_strcmp(str_num, "-1"))
size += print("fffffffffffff");
else
size += print(str_num);
return (size);
}

/**
 * _strcmp - Compare two strings
 * @s1: String 1
 * @s2: String 2
 * Return: Integer
 **/
int _strcmp(char *s1, char *s2)
{
int i;

for (i = 0; s1[i] != '\0'; i++)
{
if (s1[i] != s2[i])
return (s1[i] - s2[i]);
}

return (0);
}

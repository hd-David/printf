#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * _printf - Produces output according to a format
 * @format: Is a character string. The format string
 * is composed of zero or more directives
 *
 * Return: The number of characters printed (excluding
 * the null byte used to end output to strings)
 **/
int _printf(const char *format, ...) {
  va_list arg;
  int printed_chars = 0;

  va_start(arg, format);

  while (*format != '\0') {
    if (*format == '%') {
      format++;
      switch (*format) {
      case 'c':
	printed_chars += print_char(arg);
	break;
      case 's':
	printed_chars += print_string(arg);
	break;
      case '%':
	printed_chars += print_percent(arg);
	break;
      default:
	putchar('%');
	putchar(*format);
	printed_chars += 2;
	break;
      }
    }
    else {
      putchar(*format);
      printed_chars++;
    }
    format++;
  }

  va_end(arg);
  return printed_chars;
}

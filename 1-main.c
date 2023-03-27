#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main() {
  int i = 42;
  char c = 'A';
  char *s = "Hello, world!";

  int num_chars = _printf("i = %d, c = %c, s = %s\n", i, c, s);

  printf("Number of characters printed: %d\n", num_chars);

  return 0;
}

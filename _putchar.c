#include "main.h"
#include <unistd.h>

#define BUFFER_SIZE 1024

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
static char buffer[BUFFER_SIZE];
static int buf_size = 0;
int num_bytes = 0;

if (buf_size == BUFFER_SIZE)
{
num_bytes = write(1, buffer, BUFFER_SIZE);
if (num_bytes == -1)
return (-1);
buf_size = 0;
}

buffer[buf_size++] = c;

return (1);
}

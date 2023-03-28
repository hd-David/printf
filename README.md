
# 0x11. C - printf

The _printf function is an implementation of the standard printf function in the C programming language. Like the printf function, _printf allows you to print formatted text to the standard output stream using a format string and variadic arguments.


## Usage
To use the `_printf` function, simply include the `main.h` header file in your C program, and then call the _printf function with a format string and any necessary arguments.

Here is an example:
```
#include "main.h"

int main() {
    _printf("Hello, %s!\n", "world");
    return 0;
}

```
In this example, the `_printf` function is used to print the string "Hello, world!" to the standard output stream. The %s placeholder in the format string is replaced with the string argument "world".
## Supported format specifiers
The _printf function supports the following format specifiers:
- %c - character
- %s - string
- %d - signed integer
- %i - signed integer
- %u - unsigned integer
- %o - octal integer
- %x - hexadecimal integer (lowercase)
- %X - hexadecimal integer (uppercase)
- %% - literal '%' character


## Return value
The `_printf` function returns the number of characters printed to the standard output stream, or a negative value if an error occurs.
## Error handling
If an error occurs during the execution of the `_printf` function, it will return a negative value. Possible error scenarios include:

Invalid format string `(e.g. missing or mismatched format specifiers)`
Insufficient number of arguments for the given format string
Invalid format specifier `(e.g. %g, %p, etc.)`
##### Authors
- Sophie Mamani
- David Mwewa
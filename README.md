*This project has been created as part of the 42 curriculum by arozados.*

# ft_printf

## Description

`ft_printf` is a custom implementation of the C standard library function `printf`, developed as part of the 42 curriculum.

The goal of the project is to reproduce the core behavior of `printf` while practicing variadic functions, formatted output, and low-level C programming.

The implementation supports the following conversions:
- `%c` — prints a character.
- `%s` — prints a string.
- `%p` — prints a pointer address.
- `%d` and `%i` — print a signed decimal integer.
- `%u` — prints an unsigned decimal integer.
- `%x` and `%X` — print an integer in hexadecimal (lowercase or uppercase).
- `%%` — prints a literal percent sign.

The function returns the number of characters printed, as `printf` does.

> Adjust the supported conversions below if your implementation differs.

## Instructions

### Requirements

- A C compiler such as `cc` or `gcc`.
- `make`.

### Compilation

From the root of the repository, run:

```sh
make
```

This should compile the source files and produce the library, usually `libftprintf.a`.

If your Makefile uses different targets, check the available rules in `Makefile`. Common targets include:

```sh
make        # Build the library
make clean  # Remove object files
make fclean # Remove object files and the library
make re     # Clean and rebuild
```

### Using the library

Include the header in your C source file and link the compiled library when building your program. For example:

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello, %s! Number: %d\n", "42", 42);
    return (0);
}
```

Compile the example from the repository root (adjust file names or include paths if needed):

```sh
cc main.c -L. -lftprintf -I. -o example
./example
```

## Resources

### Documentation and references

- [`printf(3)` — Linux manual page](https://man7.org/linux/man-pages/man3/printf.3.html): behavior and return value of the standard `printf` function.
- [GNU C Library documentation: Formatted Output](https://www.gnu.org/software/libc/manual/html_node/Formatted-Output.html): formatted output functions and conversion specifications.
- [cppreference: `printf`](https://en.cppreference.com/w/c/io/fprintf.html): reference for formatted I/O in C.
- [GNU C Library documentation: Variadic Functions](https://www.gnu.org/software/libc/manual/html_node/Variadic-Functions.html): background on functions that accept a variable number of arguments.
- [`stdarg.h` — Linux manual page](https://man7.org/linux/man-pages/man3/stdarg.3.html): details on `va_list`, `va_start`, `va_arg`, and `va_end`.

### AI usage

AI assistance was used to help draft and organize this README and to clarify documentation requirements.

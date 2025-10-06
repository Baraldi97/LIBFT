#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int ft_printf(const char *format, ...);
int print_format(char type, va_list args);
int print_char(int c);
int print_str(char *s);
int print_digit(long n, int base, char *base_chars);
int print_ptr(unsigned long n, char *base_chars);

#endif

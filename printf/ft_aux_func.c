#include "ft_printf.h"


//A função print_char vai printar um caractere (Aqui usamos INT devido ao Type promotion em c)
int print_char(int c)
{
    return write(1, &c, 1);
}
//A função print_str vai nos permitir escrever uma string e escrever o erro para o ponteiro %p
int print_str(char *s)
{
    int i;


    i = 0;
    if (!s)
        s = "(null)";
    while (s[i] != '\0')
        i += print_char(s[i]);
    return (i);
}


int print_digit(long    n, int  base, char *base_chars)
{
    int     count;


    count = 0;
    if (n < 0 && base == 10) //Tratando o caso de numeros negativos.
    {
        count += print_char('-');
        n = -n;
    }
    unsigned long un = n;
    if (un >= (unsigned int)base)
    {
        count += print_digit(un / base, base, base_chars);
    }
    count += print_char(base_chars[un % base]);
    return count;
}
int print_ptr(unsigned long n, char *base_chars)
{
    int count;
   
    count = 0;
    if (!n)
    {
        return write(1, "(nil)", 5);
    }
    count += write(1, "0x", 2); // Imprime o prefixo "0x"
    count += print_digit(n, 16, base_chars); // Usa a função para imprimir o resto em hexadecimal
    return count;
}
#include <stdarg.h>


int print_format(char type, va_list args)
{
    int     count;
    char    *hex_lower = "0123456789abcdef";
    char    *hex_upper = "0123456789ABCDEF";
   
    count = 0;
    if (type == 'c')
        count += print_char(va_arg(args, int));
    else if (type == 's')
        count += print_str(va_arg(args, char *));
    else if (type == 'p')
        count += print_ptr(va_arg(args, unsigned long), hex_lower);
    else if (type == 'd' || type == 'i')
        count += print_digit(va_arg(args, int), 10, "0123456789");
    else if (type == 'u')
        count += print_digit(va_arg(args, unsigned int), 10, "0123456789");
    else if (type == 'x')
        count += print_digit(va_arg(args, unsigned int), 16, hex_lower);
    else if (type == 'X')
        count += print_digit(va_arg(args, unsigned int), 16, hex_upper);
    else if (type == '%')
        count += print_char('%');
    return count;
}

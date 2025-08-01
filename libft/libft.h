#include <stdio.h>
#include <stddef.h>
#include <unistd.h>
#include <ctype.h>

int ft_isalpha(char c);
int ft_isdigit(int nb);
int ft_isalnum(char c);
int ft_isascii(int c);
int ft_isprint(char c);
size_t	ft_strlen(const char *str);
void    *ft_memset(void *s, int c, size_t n);
void    ft_bzero(void *s, size_t n);
size_t ft_strlcpy(char *dst, const char *src, size_t dstsize);

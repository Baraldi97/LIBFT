#include <stdio.h>

void    *ft_memset(void *s, int c, size_t n)
{
    unsigned char *ptr;
    size_t  i;

    ptr = (unsigned char *)s;
    i = 0;

    while (i < n)
    {
        ptr[i] = c;
        i++;
    }
    return (s);
}

// int main(void)
// {
//     char    name[20] = "rodrigo";

//     printf("before: %s\n", name);
//     ft_memset(name + 2, '*', 5);
//     printf("after: %s\n", name);
//     return (0);
// }
#include "../includes/ft_printf.h"

int ft_putint(int n)
{
    int len;
    char *str;

    str = ft_itoa(n);
    len = ft_putstr(str);
    free(str);
    return(len);
}
#include "../includes/ft_printf.h"

int ft_putchar(char c, int count)
{
    ft_putchar_fd(c, 1);
    return(1);
}

int ft_putstr(char *str)
{
    int len;

    ft_putstr_fd(str, 1);
    len = ft_strlen(str);
    return(len);
}
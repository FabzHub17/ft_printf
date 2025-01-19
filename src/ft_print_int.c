#include "../includes/ft_printf.h"

int ft_putint(int num)
{
    int len;
    char *str;

    str = ft_itoa(num);
    len = ft_putstr(str);
    free(str);
    return(len);
}
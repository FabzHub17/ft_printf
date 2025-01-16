#include "../includes/ft_printf.h"

int ft_printf(const char *format, ...)
{
    int i;
    int count;
    va_list args;

    i = 0;
    count = 0;
    va_start(args, format);
    while(format[i] != '\0')
    {
        if(format[i] == '%')
        {
            i++;
            print_arg(format[i], args, &count);
        }
        else
        {
            ft_putchar(format[i]);   // should change it my function later on.
            count++; 
        }
    }
    var_end(args);
    return (count);
}

void print_arg(int c, va_list args, int *count)
{
    if ( c == 'c')
        return;
    else if (c == 's')
        return;
    else if (c == 'p')
        return;
    else if (c == 'd' || c == 'i')
        return;
    else if (c == 'u')
        return;
    else if (c == 'x')
        return;
    else if (c == 'X')
        return;
    else if (c == '%')
        return;
    else
        return;
}
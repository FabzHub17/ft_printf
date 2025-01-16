/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvithara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 19:46:56 by tvithara          #+#    #+#             */
/*   Updated: 2025/01/16 19:46:58 by tvithara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
            count += print_arg(format[i], args);
        }
        else
            count += ft_putchar(format[i]);
        i++;
    }
    var_end(args);
    return (count);
}

int print_arg(int c, va_list args)
{
    if ( c == 'c')
        return (ft_putchar(va_arg(args, int)));
    else if (c == 's')
        return (ft_putstr(va_arg(args, char *)));
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
        return(0);
}

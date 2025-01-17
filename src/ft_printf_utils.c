/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvithara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 19:47:24 by tvithara          #+#    #+#             */
/*   Updated: 2025/01/16 19:47:26 by tvithara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int ft_putchar(char c)
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

int ft_puthex(unsigned int n, char c)
{
    int len;

    len = 0;
    if (n >= 16)
    {
        len += ft_puthex(n / 16, c);
        len += ft_putchar(n % 16 + c);
    }
    else
        len += ft_putchar(n + c);
    return(len);
}

int ft_putnbr(int n)
{
    int len;

    len = 0;
    if (n == -2147483648)
    {
        len += ft_putstr("-2147483648");
        return(len);
    }
    if (n < 0)
    {
        len += ft_putchar('-');
        n = -n;
    }
    if (n >= 10)
    {
        len += ft_putnbr(n / 10);
        len += ft_putchar(n % 10 + '0');
    }
    else
        len += ft_putchar(n + '0');
    return(len);
}



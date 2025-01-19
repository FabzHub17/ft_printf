#include "../includes/ft_printf.h"

int ft_puthex(unsigned int num, char c)
{
    int count;

    count = 0;
    if(num == 0)
        return(ft_putchar("0"));

    if (num >= 16)
        count += ft_puthex(num / 16, c);
    
    // Handle the current digit
    if (num % 16 <= 9)
        count += ft_putchar((num % 16) + '0');
    else
    {
        if (c == 'x')
            count += ft_putchar((num % 16) - 10 + 'a');
        else
            count += ft_putchar((num % 16) - 10 + 'A');
    }
    return (count);
}

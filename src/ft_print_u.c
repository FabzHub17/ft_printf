/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvithara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 18:31:25 by tvithara          #+#    #+#             */
/*   Updated: 2025/01/22 18:31:27 by tvithara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_put_u(unsigned int num)
{
	int		len;
	char	*str;

	str = ft_itoa(num);
	len = ft_putstr(str);
	free(str);
	return (len);
}

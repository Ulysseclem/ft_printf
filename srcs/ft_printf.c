/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulysse <ulysse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 11:03:27 by uclement          #+#    #+#             */
/*   Updated: 2023/03/08 16:10:06 by ulysse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"
#include <unistd.h>

int	ft_which(const char *str, va_list args)
{
	int len;
	
	len = 0;
	if (*str == 'c')
		len = ft_putchar(va_arg (args, int));
	else if (*str == 's')
		len = ft_str(va_arg (args, char *));
	else if (*str == 'p')
		ft_put_ptr(va_arg (args, uintptr_t));
	else if (*str == 'd')
		len = ft_base10(va_arg (args, int));
	else if (*str == 'i')
		len = ft_base10(va_arg (args, int));
	else if (*str == 'u')
		return (6);
	else if (*str == 'x')
	{
		len = ft_hexaconverter(va_arg (args, int));
		printf("\nlen = %d\n",len);
	}
	else if (*str == 'X')
		ft_hexaconverter_maj(va_arg (args, int));
	else if (*str == '%')
		return (8);
	return (len);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;

	va_start (args, str);
	while (*str)
	{
		if (*str != '%' && str)
		{
			ft_putchar(*str);
			str++;
		}
		else
		{
			ft_which(str + 1, args);
			str += 2;
		}
	}
	va_end(args);
	return (0);
}

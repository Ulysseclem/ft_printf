/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uclement <uclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 11:03:27 by uclement          #+#    #+#             */
/*   Updated: 2023/03/03 11:28:53 by uclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"
#include <unistd.h>

int	ft_which(const char *str, va_list args)
{
	if (*str == 'c')
		ft_putchar(va_arg (args, int));
	else if (*str == 's')
		ft_str(va_arg (args, char *));
	else if (*str == 'p')
		ft_pointer(va_arg (args, int)); // faux
	else if (*str == 'd')
		ft_decimal(va_arg (args, double));
	else if (*str == 'i')
		ft_base10(va_arg (args, int));
	else if (*str == 'u')
		return (6);
	else if (*str == 'x')
		ft_hexaconverter(va_arg (args, int));
	else if (*str == 'X')
		ft_hexaconverter_maj(va_arg (args, int));
	else if (*str == '%')
		return (8);
	return (0);
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

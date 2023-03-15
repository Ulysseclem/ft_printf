/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uclement <uclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 11:03:27 by uclement          #+#    #+#             */
/*   Updated: 2023/03/15 12:20:24 by uclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"
#include <unistd.h>

int	ft_which(const char *str, va_list args)
{
	int	len;

	len = 0;
	if (*str == 'c')
		len = ft_putchar(va_arg (args, int));
	else if (*str == 's')
		len = ft_str(va_arg (args, char *));
	else if (*str == 'p')
		len = put_p(va_arg (args, uintptr_t));
	else if (*str == 'd' || *str == 'i')
		len = ft_base10(va_arg (args, int));
	else if (*str == 'u')
		len = ft_unsigned(va_arg (args, int));
	else if (*str == 'x')
		len = ft_hexaconverter(va_arg (args, int));
	else if (*str == 'X')
		len = ft_hexaconverter_maj(va_arg (args, int));
	else if (*str == '%')
	{
		len += 1;
		write (1, "%%", 1);
	}
	return (len);
}

int	ft_printf(const char *str, ...)
{
	int		len;
	va_list	args;

	len = 0;
	va_start (args, str);
	while (*str)
	{
		if (*str != '%' && str)
		{
			len += ft_putchar(*str);
			str++;
		}
		else
		{
			len += ft_which(str + 1, args);
			str += 2;
		}
	}
	va_end(args);
	return (len);
}

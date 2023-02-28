/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulysse <ulysse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 11:03:27 by uclement          #+#    #+#             */
/*   Updated: 2023/02/28 17:20:06 by ulysse           ###   ########.fr       */
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
		return (3);
	else if (*str == 'd')
		ft_decimal(va_arg (args, double));
	else if (*str == 'i')
		ft_base10(va_arg (args, int));
	else if (*str == 'u')
		return (6);
	else if (*str == 'x')
		return (7);
	else if (*str == 'X')
		return (7);
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

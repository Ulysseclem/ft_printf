/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uclement <uclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 11:03:27 by uclement          #+#    #+#             */
/*   Updated: 2023/02/10 09:49:58 by uclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_which(const char *str)
{
	if (*str == 'c')
		return (1);
	else if (*str == 's')
		return (2);
	else if (*str == 'p')
		return (3);
	else if (*str == 'd')
		return (4);
	else if (*str == 'i')
		return (5);
	else if (*str == 'u')
		return (6);
	else if (*str == 'x')
		return (7);
	else if (*str == 'X')
		return (7);
	else if (*str == '%')
		return (8);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;

	i = 0;
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
			if (ft_which(str + 1) == 1)
				break;
			i = va_arg (args, int);
			ft_putchar(i);
			str++;
		}
	}
	va_end(args);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uclement <uclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 11:03:27 by uclement          #+#    #+#             */
/*   Updated: 2023/02/24 11:28:25 by uclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

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
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	char	*test;

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
			if (ft_which(str + 1) == 1) // %c
			{
				i = va_arg (args, int);
				ft_putchar(i);
				str++;
			}
			else if (ft_which(str + 1) == 2) // %s
			{
				test = va_arg (args, char *);
				while (*test)
				{
					ft_putchar(*test);
					test++;
				}
				str++;
			}
			str++;
		}
	}
	va_end(args);
	return (0);
}

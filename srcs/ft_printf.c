/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulysse <ulysse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 11:03:27 by uclement          #+#    #+#             */
/*   Updated: 2023/02/09 17:47:26 by ulysse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#include <unistd.h>

void	ft_putchar(char c) 
{
	write(1, &c, 1);
}

int	ft_printf(const char *str, ...)
{
	va_list args;
	va_start(args, count%);

	// int i = 0;


	Count %



	while (*str)
	{
		if(*str != '%' && str)
			{
				ft_putchar(*str);
				str++;
			}
		// i = va_arg (args, int);
		// printf("%d", i);
	}
	va_end(args);
	return(0);
}


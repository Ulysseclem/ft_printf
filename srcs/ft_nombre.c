/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nombre.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulysse <ulysse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 16:08:45 by ulysse            #+#    #+#             */
/*   Updated: 2023/02/28 17:24:13 by ulysse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"
#include <stdlib.h>

void	 ft_base10(int i)
{
	char *str;
	
	str = ft_itoa(i);
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

void	 ft_decimal(double i)
{
	char *str;
	
	str = ft_itoa(i);
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}
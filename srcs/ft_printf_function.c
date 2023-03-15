/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_function.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulysse <ulysse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 11:21:42 by uclement          #+#    #+#             */
/*   Updated: 2023/03/08 16:08:46 by ulysse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"
#include <stdlib.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return(1);
}

int ft_str(char *str)
{
	int len;
	
	len = 0;
	while (str[len])
	{
		ft_putchar(str[len]);
		len++;
	}
	return(len);
}
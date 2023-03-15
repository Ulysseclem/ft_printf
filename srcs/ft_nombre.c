/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nombre.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uclement <uclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 16:08:45 by ulysse            #+#    #+#             */
/*   Updated: 2023/03/15 11:12:04 by uclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"
#include <stdlib.h>

int	ft_base10(int i)
{
	char	*str;
	int		j;

	j = 0;
	str = ft_itoa(i);
	while (str[j])
	{
		ft_putchar(str[j]);
		j++;
	}
	free(str);
	return (j);
}

int	ft_unsigned(int i)
{
	int	len;

	len = 0;
	if (i < 0)
	{
		i = i * -1;
		len += write (1, "-", 1);
		len += ft_base10(i);
	}
	else
		len += ft_base10(i);
	return (len);
}

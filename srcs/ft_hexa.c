/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulysse <ulysse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 09:53:21 by uclement          #+#    #+#             */
/*   Updated: 2023/03/08 16:14:26 by ulysse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"
#include <stdlib.h>

int	ft_hexaconverter(int nb)
{
	char	*hex;
	int		len;

	hex = "0123456789abcdef";
	if (nb < 0)
		nb = nb * -1;
	if (nb > 16)
	{
		ft_hexaconverter(nb / 16);
		ft_hexaconverter(nb % 16);
	}
	else
		len =+ ft_putchar(hex[nb]);
	return(len);
}

void	ft_hexaconverter_maj(int nb)
{
	char	*hex;

	hex = "0123456789ABCDEF";
	if (nb < 0)
		nb = nb + 256;
	if (nb > 16)
	{
		ft_hexaconverter_maj(nb / 16);
		ft_hexaconverter_maj(nb % 16);
	}
	else
		ft_putchar(hex[nb]);
}

void	ft_put_ptr(uintptr_t num)
{
	if (num >= 16)
	{
		ft_put_ptr(num / 16);
		ft_put_ptr(num % 16);
	}
	else
	{
		if (num <= 9)
			ft_putchar_fd((num + '0'), 1);
		else
			ft_putchar_fd((num - 10 + 'a'), 1);
	}
}

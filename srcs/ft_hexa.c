/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uclement <uclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 09:53:21 by uclement          #+#    #+#             */
/*   Updated: 2023/03/03 11:28:17 by uclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"
#include <stdlib.h>

void	ft_hexaconverter(int nb)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (nb < 0)
		nb = nb + 256;
	if (nb > 16)
	{
		ft_hexaconverter(nb / 16);
		ft_hexaconverter(nb % 16);
	}
	else
		ft_putchar(hex[nb]);
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
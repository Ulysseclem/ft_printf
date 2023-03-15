/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nombre.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulysse <ulysse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 16:08:45 by ulysse            #+#    #+#             */
/*   Updated: 2023/03/08 16:03:49 by ulysse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"
#include <stdlib.h>

int	 ft_base10(int i)
{
	char *str;
	int	j;
	
	j = 0;
	str = ft_itoa(i);
	while (str[j])
	{
		ft_putchar(str[j]);
		j++;
	}
	return(j);
}

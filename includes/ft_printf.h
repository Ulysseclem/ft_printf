/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uclement <uclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 10:57:22 by uclement          #+#    #+#             */
/*   Updated: 2023/03/15 11:06:33 by uclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
#include <inttypes.h>
#include <stdio.h>

int		ft_printf(const char *,...);
int		ft_putchar(char c);
int		ft_base10(int);
int		ft_str(char *);
void	ft_decimal(double);
int		ft_hexaconverter(int nb);
int		ft_hexaconverter_maj(int nb);
void	ft_put_ptr(uintptr_t num);
int	put_p(uintptr_t num);
int	ft_unsigned(int i);



#endif
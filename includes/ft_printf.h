/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uclement <uclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 10:57:22 by uclement          #+#    #+#             */
/*   Updated: 2023/03/03 11:28:25 by uclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *,...);
void	ft_putchar(char c);
void	ft_base10(int);
void	ft_str(char *);
void	ft_decimal(double);
void	ft_hexaconverter(int nb);
void	ft_hexaconverter_maj(int nb);


#endif
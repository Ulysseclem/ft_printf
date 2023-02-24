/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uclement <uclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 11:46:37 by uclement          #+#    #+#             */
/*   Updated: 2023/02/24 11:11:43 by uclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

int	main(void)
{
	int opengenus = 1;
	void* address = (void *)&opengenus;
	ft_printf("test 'c' je dois affficher : %c = U \n",'U');
	ft_printf("test 's' je dois affficher : %s = test \n","test");
	ft_printf("test 's' je dois affficher : %s = test & %c = U \n","test",'U');
	ft_printf("test 's' je dois affficher : %s%c\n","test",'U');
	ft_printf("test 's' je dois affficher : %p\n",address);
}

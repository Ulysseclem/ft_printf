/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uclement <uclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 11:46:37 by uclement          #+#    #+#             */
/*   Updated: 2023/03/03 11:40:27 by uclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>
#include <stdio.h>

int	main(void)
{


	ft_printf("test 'c' je dois affficher : %c = U \n",'U');
	ft_printf("test 's' je dois affficher : %s = test \n","test");
	ft_printf("test 's' je dois affficher : %s = test & %c = U \n","test",'U');
	ft_printf("test 's' je dois affficher : testU - %s%c\n","test",'U');
	ft_printf("test 'i' je dois affficher : %i\n",-1000);
	ft_printf("test 'd' je dois affficher : %d\n",10);
	ft_printf("test 'x' je dois affficher : %x\n",1234);
	ft_printf("test 'X' je dois affficher : %X\n",1234);
	printf("test 'p' je dois affficher : %p\n",(void *)30);


}

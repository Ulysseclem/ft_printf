/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uclement <uclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 11:46:37 by uclement          #+#    #+#             */
/*   Updated: 2023/03/15 13:57:34 by uclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>
#include <stdio.h>
#include <string.h>


int	main(void)
{
	int	a;
	int	*b;
	int	x;
	int	y;

	b = &a;
	x = 0;
	y = 0;

//-----------------------------------test %c----------------------------------//

	printf("\n------------TEST %%c --------------- :\n\n");
	x = ft_printf("test 'c' je dois affficher : %c = U\n",'U');
	y = printf("test 'c' je dois affficher : %c = U\n",'U');
	if (x - y != 0)
		(printf("wrong return value\n\n"));
	else
		(printf("Good return value\n\n"));
	x = ft_printf("test %%c - value str 'ert' : %c\n",'ert');
	y = printf("test %%c - value str 'ert' : %c\n",'ert');
	if (x - y != 0)
		(printf("wrong return value\n\n"));
	else
		(printf("Good return value\n\n"));
	x = ft_printf("test 'c' - value int 1 : %c\n",1);
	y = printf("test 'c' - value int 1 : %c\n",1);
	if (x - y != 0)
		(printf("wrong return value\n\n"));
	else
		(printf("Good return value\n\n"));

//-----------------------------------test %s----------------------------------//

	printf("\n------------TEST %%c --------------- :\n\n");
	x = ft_printf("test 's' je dois affficher : %s = test \n","test");
	y = printf("test 's' je dois affficher : %s = test \n","test");
	if (x - y != 0)
		(printf("wrong return value\n\n"));
	else
		(printf("Good return value\n\n"));

	x = ft_printf("test 's' - empty value : %s\n","");
	y = printf("test 's' - empty value : %s\n","");
	if (x - y != 0)
		(printf("wrong return value\n\n"));
	else
		(printf("Good return value\n\n"));



		
	ft_printf("test 's' je dois affficher : %s = test & %c = U \n","test",'U');
	ft_printf("test 's' je dois affficher : testU - %s%c\n","test",'U');
	ft_printf("test 'i' je dois affficher : %i\n",-1000);
	ft_printf("test 'd' je dois affficher : %d\n",10);
	ft_printf("test 'x' je dois affficher : %x\n",1234);
	ft_printf("test 'X' je dois affficher : %X\n",1234);
	x = printf("%p\n",(void *)0);
	printf("%d\n",x);
	y = ft_printf("%p\n",(void *)0);
	printf("%d\n",y);
	printf("test 'p' je dois affficher : %p\n",b);
	ft_printf("test 'p' je dois affficher : %p\n",b);
	printf("test 'u' je dois affficher : %p\n",b);
	ft_printf("test 'u' je dois affficher : %u\n",100);
	printf("test 'u' je dois affficher : %u\n",100);
	ft_printf("test 'u' je dois affficher : %u\n",-100);







}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uclement <uclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 11:46:37 by uclement          #+#    #+#             */
/*   Updated: 2023/03/22 10:26:47 by uclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>

/* test:		$(NAME) $(SRCS)
			@ ${CC} -I ${DIRINC} -I ${DIRLIB} ./testeur/main.c ${NAME} && ./a.out */


void cmpvalue(int x, int y)
{
	if (x - y != 0)
		(printf("wrong return value\n\n"));
	else
		(printf("Good return value\n\n"));
}

int	main(void)
{
	int	a;
	int	*b;
	int	x;
	int	y;
	
	char	c;
	char	*str;
	int		i;
	
	b = &a;
	x = 0;
	y = 0;

	printf("\n------------TEST %%c --------------- :\n\n");


	c = 'U';
	x = ft_printf("U : %c\n",c);
	y = printf("U : %c\n",c);
	cmpvalue(x,y);
	
	c = 'ert';
	x = ft_printf("ert : %c\n",c);
	y = printf("ert : %c\n",c);
	cmpvalue(x,y);

	c = 1;
	x = ft_printf("1 : %c\n",c);
	y = printf("1 : %c\n",c);
	cmpvalue(x,y);

	c =  '0' - 256;
	x = ft_printf(" '0' - 256 : %c\n",c);
	y = printf(" '0' - 256 : %c\n",c);
	cmpvalue(x,y);

	c = '0' + 256;
	x = ft_printf(" '0' + 256: %c\n",c);
	y = printf(" '0' + 256: %c\n",c);
	cmpvalue(x,y);

	x = ft_printf(" '0', 0, '1' : %c %c %c \n", '0', 0, '1');
	y = ft_printf(" '0', 0, '1' : %c %c %c \n", '0', 0, '1');
	cmpvalue(x,y);


	printf("\n------------TEST %%s --------------- :\n\n");
	
	str = "Mussum Ipsum, cacilds";

	x = ft_printf("Mussum Ipsum, cacilds : %s\n",str);
	y = printf("Mussum Ipsum, cacilds : %s\n",str);
	cmpvalue(x,y);


	x = ft_printf(" - , , 4,, Mussum Ipsum, cacilds : %s %s %s %s %s\n", " - ", "", "4", "", str);
	y = printf(" - , , 4,, Mussum Ipsum, cacilds : %s %s %s %s %s\n", " - ", "", "4", "", str);
	cmpvalue(x,y);

	x = ft_printf(" NULL %s NULL\n", NULL);
	y = printf(" NULL %s NULL\n", NULL);
	cmpvalue(x,y);


	
	printf("\n------------TEST %%i --------------- :\n\n");

	i = 0;
	x = ft_printf("%i\n",i);
	y = printf("%i\n",i);
	cmpvalue(x,y);

	i = -1;
	x = ft_printf("%i\n",i);
	y = printf("%i\n",i);
	cmpvalue(x,y);
	
	i = 1;
	x = ft_printf("%i\n",i);
	y = printf("%i\n",i);
	cmpvalue(x,y);

	i = 42;
	x = ft_printf("%i\n",i);
	y = printf("%i\n",i);
	cmpvalue(x,y);

	i = -42;
	x = ft_printf("%i\n",i);
	y = printf("%i\n",i);
	cmpvalue(x,y);

	i = INT_MAX;
	x = ft_printf("int_max : %i\n",i);
	y = printf("int_max : %i\n",i);
	cmpvalue(x,y);

	i = INT_MIN;
	x = ft_printf("int_min : %i\n",i);
	y = printf("int_min : %i\n",i);
	cmpvalue(x,y);

	i = LONG_MAX;
	x = ft_printf("LONG_MAX : %i\n",i);
	y = printf("LONG_MAX : %i\n",i);
	cmpvalue(x,y);

	i = LONG_MIN;
	x = ft_printf("LONG_MIN; : %i\n",i);
	y = printf("LONG_MIN; : %i\n",i);
	cmpvalue(x,y);

	i = 9223372036854775807LL;
	x = ft_printf("9223372036854775807LL : %i\n",i);
	y = printf("9223372036854775807LL : %i\n",i);
	cmpvalue(x,y);

	i = 9223372036854775807LL;
	x = ft_printf(" INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42 : %i %i %i %i %i %i %i\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	y = printf(" INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42 : %i %i %i %i %i %i %i\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	cmpvalue(x,y);
	
	printf("\n------------TEST %%d --------------- :\n\n");

	i = 0;
	x = ft_printf("%d\n",i);
	y = printf("%d\n",i);
	cmpvalue(x,y);

	i = -1;
	x = ft_printf("%d\n",i);
	y = printf("%d\n",i);
	cmpvalue(x,y);
	
	i = 1;
	x = ft_printf("%d\n",i);
	y = printf("%d\n",i);
	cmpvalue(x,y);

	i = 42;
	x = ft_printf("%d\n",i);
	y = printf("%d\n",i);
	cmpvalue(x,y);

	i = -42;
	x = ft_printf("%d\n",i);
	y = printf("%d\n",i);
	cmpvalue(x,y);

	i = INT_MAX;
	x = ft_printf("int_max : %d\n",i);
	y = printf("int_max : %d\n",i);
	cmpvalue(x,y);

	i = INT_MIN;
	x = ft_printf("int_min : %d\n",i);
	y = printf("int_min : %d\n",i);
	cmpvalue(x,y);

	i = LONG_MAX;
	x = ft_printf("LONG_MAX : %d\n",i);
	y = printf("LONG_MAX : %d\n",i);
	cmpvalue(x,y);

	i = LONG_MIN;
	x = ft_printf("LONG_MIN; : %d\n",i);
	y = printf("LONG_MIN; : %d\n",i);
	cmpvalue(x,y);

	i = 9223372036854775807LL;
	x = ft_printf("9223372036854775807LL : %d\n",i);
	y = printf("9223372036854775807LL : %d\n",i);
	cmpvalue(x,y);

	i = 9223372036854775807LL;
	x = ft_printf(" INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42 : %d %d %d %d %d %d %d\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	y = printf(" INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42 : %d %d %d %d %d %d %d\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	cmpvalue(x,y);

	printf("\n------------TEST %%x --------------- :\n\n");

	i = 0;
	x = ft_printf("%x\n",i);
	y = printf("%x\n",i);
	cmpvalue(x,y);

	i = -1;
	x = ft_printf("%x\n",i);
	y = printf("%x\n",i);
	cmpvalue(x,y);
	
	i = 1;
	x = ft_printf("%x\n",i);
	y = printf("%x\n",i);
	cmpvalue(x,y);

	i = 42;
	x = ft_printf("%x\n",i);
	y = printf("%x\n",i);
	cmpvalue(x,y);

	i = -42;
	x = ft_printf("%x\n",i);
	y = printf("%x\n",i);
	cmpvalue(x,y);

	i = INT_MAX;
	x = ft_printf("int_max : %x\n",i);
	y = printf("int_max : %x\n",i);
	cmpvalue(x,y);

	i = INT_MIN;
	x = ft_printf("int_min : %x\n",i);
	y = printf("int_min : %x\n",i);
	cmpvalue(x,y);

	i = LONG_MAX;
	x = ft_printf("LONG_MAX : %x\n",i);
	y = printf("LONG_MAX : %x\n",i);
	cmpvalue(x,y);

	i = LONG_MIN;
	x = ft_printf("LONG_MIN; : %x\n",i);
	y = printf("LONG_MIN; : %x\n",i);
	cmpvalue(x,y);

	i = 9223372036854775807LL;
	x = ft_printf("9223372036854775807LL : %x\n",i);
	y = printf("9223372036854775807LL : %x\n",i);
	cmpvalue(x,y);

	i = 9223372036854775807LL;
	x = ft_printf(" INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42 : %x %x %x %x %x %x %x\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	y = printf(" INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42 : %x %x %x %x %x %x %x\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	cmpvalue(x,y);

	printf("\n------------TEST %%X --------------- :\n\n");

	i = 0;
	x = ft_printf("%X\n",i);
	y = printf("%X\n",i);
	cmpvalue(x,y);

	i = -1;
	x = ft_printf("%X\n",i);
	y = printf("%X\n",i);
	cmpvalue(x,y);
	
	i = 1;
	x = ft_printf("%X\n",i);
	y = printf("%X\n",i);
	cmpvalue(x,y);

	i = 42;
	x = ft_printf("%X\n",i);
	y = printf("%X\n",i);
	cmpvalue(x,y);

	i = -42;
	x = ft_printf("%X\n",i);
	y = printf("%X\n",i);
	cmpvalue(x,y);

	i = INT_MAX;
	x = ft_printf("int_max : %X\n",i);
	y = printf("int_max : %X\n",i);
	cmpvalue(x,y);

	i = INT_MIN;
	x = ft_printf("int_min : %X\n",i);
	y = printf("int_min : %X\n",i);
	cmpvalue(x,y);

	i = LONG_MAX;
	x = ft_printf("LONG_MAX : %X\n",i);
	y = printf("LONG_MAX : %X\n",i);
	cmpvalue(x,y);

	i = LONG_MIN;
	x = ft_printf("LONG_MIN; : %X\n",i);
	y = printf("LONG_MIN; : %X\n",i);
	cmpvalue(x,y);

	i = 9223372036854775807LL;
	x = ft_printf("9223372036854775807LL : %X\n",i);
	y = printf("9223372036854775807LL : %X\n",i);
	cmpvalue(x,y);

	i = 9223372036854775807LL;
	x = ft_printf(" INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42 : %X %X %X %X %X %X %X\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	y = printf(" INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42 : %X %X %X %X %X %X %X\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	cmpvalue(x,y);


	printf("\n------------TEST %%p --------------- :\n\n");

	x = ft_printf("%p\n",-1);
	y = printf("%p\n",-1);
	cmpvalue(x,y);
	
	x = ft_printf("%p\n",1);
	y = printf("%p\n",1);
	cmpvalue(x,y);

	x = ft_printf("%p\n",15);
	y = printf("%p\n",15);
	cmpvalue(x,y);

	x = ft_printf("ptr b : %p\n",b);
	y = printf("ptr b : %p\n",b);
	cmpvalue(x,y);

}

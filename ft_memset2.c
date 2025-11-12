/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bakh <mel-bakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:07:25 by mel-bakh          #+#    #+#             */
/*   Updated: 2025/11/09 21:00:21 by mel-bakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>


void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*pointer;

	pointer = (unsigned char *)b;	
	i = 0;
	while (i < len)
	{
		pointer[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
// typedef struct s
// {
// 	void* a;
// 	int c;
// 	char b;
// 	char d;
// 	char e;
// 	char g;
// } s;

// int	main(void)
// {
// 	s arr[]={{"", 1, 2, 'a'},{"", 3, 4, 'c'}};
	// printf("%d", (arr )->a)  ;
	// ft_memset(&((arr + 1)->a),0,4);
	// ft_memset(&((arr + 1)->a),0,4);
	// ft_memset(&((arr + 1)->a),0,4);
	// ft_memset(&((arr + 1)->a),0,4);
	// printf("%lu" , sizeof(s));


	//00000000	00000000	00000101	00111010
	//11111111  11111111    11111010    11111111
	//00000000  01010110    00110010    00101101  5651444

	// 00111010
	// 

	// int i = 5651444;
	//-1337
	// ft_memset(&i,0,4);
	// ft_memset(&i,0b00000101,2);
	// ft_memset(&i,0b00111001,1);



	// ft_memset(&i, 0b11111111,4);
	// ft_memset(&i, 0b11111111,3);
	// ft_memset(&i, 0b11111010,2);
	// ft_memset(&i, 0b11000111,1);
	// printf("%d", i);
// }

	// 486838
	// int h = 1337;
	// int i = 0;
	// char *hh  = (char *)&h; 
	// ft_memset((char *)&i, hh[0],1);
	// ft_memset((char *)&i + 1,hh[1],1);	
	// ft_memset((char *)&i + 2, hh[2],1);
	// ft_memset((char *)&i + 3, hh[3],1);	


	// ft_memset(&i,109,2);
	// ft_memset(&i, 182,1);
	
	// printf("%s", ft_memset(1555, '4',5));
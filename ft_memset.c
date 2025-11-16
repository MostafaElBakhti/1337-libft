/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bakh <mel-bakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:07:25 by mel-bakh          #+#    #+#             */
/*   Updated: 2025/11/12 03:05:40 by mel-bakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
#include <stdio.h>
int main()
{

	int g[4] = {102 , 2121, 5, 5} ; 
	int  i = 1000;
	char * hh= (char* )&i;
	int h = 0;
	while(h < 4)
	{
		ft_memset((char *)&g[1] + h, hh[h], 1);
		h++;
	} 
	printf("%d", g[1]);
}
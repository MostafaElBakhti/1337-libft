/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bakh <mel-bakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 13:39:08 by mel-bakh          #+#    #+#             */
/*   Updated: 2025/11/04 18:18:42 by mel-bakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>


void    *ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	const unsigned char	*s;
	size_t			i;

	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	i = 0;

	if (!dst || !src)
    	return NULL;

	if(dst == src)
		return dst ;
	
	if (d > s)
	{
		while (len > 0)
		{
			len--;
			d[len] = s[len];
		}
		
	}else
	{
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	
	
	return (dst);
}
int main(){
    char src5[] = "123456";	
	char dest[10] ;
	ft_memmove(src5 + 2 , src5, 4); 
	// src5[2] = '\0'
    printf("src5 = '%s'\n", src5); 


}

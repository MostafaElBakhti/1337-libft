/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bakh <mel-bakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 13:39:08 by mel-bakh          #+#    #+#             */
/*   Updated: 2025/10/22 10:40:59 by mel-bakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>


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
	
	if(d == s)
        return dst ;

	if (d > s)
	{
		while (len > 0)
		{
			len-- ;
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
    char src[] = "hello" ;
    // char dst[10] ;
    ft_memmove(src+1 , src , sizeof(src));
	src[6] = '\0' ; 
    // memcpy(dst , src , 5);
    printf("%s\n" , src) ; 


	char src1[] = "abcdef";
	char dst1[10];

	ft_memmove(dst1, src1, 10);
	printf("Test 1: %s\n", dst1);


	char src5[] = "";
char dst5[10];
ft_memmove(dst5, src5, 1);
printf("Test 5: %s\n", dst5);

}

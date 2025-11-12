/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bakh <mel-bakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 13:39:08 by mel-bakh          #+#    #+#             */
/*   Updated: 2025/11/12 06:07:51 by mel-bakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	const unsigned char	*s;
	size_t			i;

	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	i = 0;
	// if (!dst || !src)
    // 	return (NULL);
	
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
// int main(){
// 	// char dst[] = "test" ; 
// 	char src[] = "hello" ; 
// 	printf("my function : %s\n" ,ft_memmove(src,src+2,3)) ; 
// 	printf("original : %s\n" ,memmove(src,src+2,3)) ; 
// 	printf(" %s\n", src) ; 
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bakh <mel-bakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 16:30:24 by mel-bakh          #+#    #+#             */
/*   Updated: 2025/10/23 21:18:40 by mel-bakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    char *d = (char *)dst ;
    const char *s = (const char *)src ;
    size_t i = 0 ; 

    if (!dst || !src)
        return (NULL);

    if(d == s)
        return dst ;

    while (i < n)
    {
        d[i] = s[i] ;
        i++ ; 
    }
    return dst ;
    
}

#include <stdio.h>

int main(){
    char src[] = "hellod" ;
    char dst[10] ;
    ft_memcpy(src , src , sizeof(src));
    printf("%s\n" , src) ; 

    // test2
    char src1[] = "hello" ;
    ft_memcpy(src1 + 1, src1 , sizeof(src1));
    printf("test 2 \n" ) ; 
    printf("%s\n" , src1) ; 

    // test3
    char src2[] = "hello" ;
    ft_memcpy(src2 , src2 +1  , sizeof(src2));
    printf("test 3 \n" ) ; 
    printf("%s\n" , src2) ; 

    // test4
    char src3[] = "" ;
    char dest1[10] ;
    ft_memcpy(dest1 , src3  , sizeof(src3));
    printf(" *** test 4 ***  \n" ) ; 
    printf("%s\n" , src3) ; 

    // test5
    char *src4 = NULL ;
    char dest2[10] ;
    ft_memcpy(dest2 , src4  , sizeof(src4));
    printf(" *** test 5 ***  \n" ) ; 
    printf("%s\n" , src4) ; 
}


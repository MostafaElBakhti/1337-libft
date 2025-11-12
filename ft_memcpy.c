/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bakh <mel-bakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 16:30:24 by mel-bakh          #+#    #+#             */
/*   Updated: 2025/11/12 05:24:08 by mel-bakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include <stdio.h>

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    char *d = (char *)dst ;
    const char *s = (const char *)src ;
    size_t i = 0 ; 
    // ! no need to handle ;
    // if (!dst || !src)
    //     return (NULL); 

    // if(d == s && d != NULL)
    //     return dst ;

    while (i < n)
    {
        d[i] = s[i] ;
        i++ ; 
    }
    return dst ;
    
}

// int main()
// {
//     char src[] = "test" ; 
//     printf("my f ; %s\n" , ft_memcpy(src, src+2  , 4)) ;
//     printf("orignl : %s\n" , memcpy(src, src+2  , 4)) ;
//     // printf("%s\n" , src) ;
    
//     //! undifined behavior >> n > sizeof(src)
// }
    // printf("my function : %s\n" , ft_memcpy(NULL , "NULL" , 3)) ;
    // dest[3] = '\0' ; 
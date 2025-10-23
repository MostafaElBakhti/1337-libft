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
    unsigned char *dest = (unsigned char *)dst ; 
    const unsigned char *source = (const unsigned char *)src ; 
    size_t i = 0 ; 
    
    while (i < n)
    {
        dest[i] = source[i] ;
        i++ ; 
    }
    dest[i] = '\0' ; 
    return dst ;
    
}

// int main(){
//     char src[] = "hello" ;
//     char dst[10] ;
//     char *test = ft_memcpy(dst , src , 5);
//     printf("%s\n" , dst) ; 
// }
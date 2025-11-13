/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bakh <mel-bakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 13:39:19 by mel-bakh          #+#    #+#             */
/*   Updated: 2025/11/12 08:09:18 by mel-bakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


size_t ft_strlcat(char *dst, const char *src, size_t size){
    size_t dst_len = 0 ; 
    size_t src_len = 0 ; 
    size_t i = 0  ;
    while (dst_len < size && dst[dst_len])
    {
        dst_len++ ;
    }
    while (src[src_len])
    {
        src_len++ ;
    }

    if (dst_len == size)
        return size + src_len ;
        
    if (dst_len < size)
    {
        while (src[i] && (dst_len + i) < size - 1 )
        {
            dst[dst_len + i] = src[i]; 
            i++ ; 
        }
        dst[dst_len + i] = '\0' ;
        
    }
    return dst_len + src_len;
    
}

// int main(void){
//     char dest[6] = "Hi ";
//     char src[] = "World";
//     size_t test = ft_strlcat(dest, src, 6);
//     printf("%zu" , test) ;
// }
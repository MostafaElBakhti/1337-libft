/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bakh <mel-bakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 16:30:24 by mel-bakh          #+#    #+#             */
/*   Updated: 2025/11/04 17:26:38 by mel-bakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t              i;
    unsigned char       *dest;
    const unsigned char *source;

    if (!dst || !src)
        return (NULL);
    if (dst == src || n == 0)
        return (dst);

    dest = (unsigned char *)dst;
    source = (const unsigned char *)src;
    i = 0;
    while (i < n)
    {
        dest[i] = source[i];
        i++;
    }
    return (dst);
}
// int main(){
//     char src[] = "hello" ;
//     char dest[10] ;
//     char *test = ft_memcpy(dest, src , 11);
//     printf("%s\n" , test) ; 
// }
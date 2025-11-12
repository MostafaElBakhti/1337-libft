/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bakh <mel-bakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 13:39:15 by mel-bakh          #+#    #+#             */
/*   Updated: 2025/11/12 08:21:00 by mel-bakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char *ft_strchr(const char *s, int c)
{
    unsigned char ch = (unsigned char)c ;
    while (*s)
    {
        if (*s == ch)
        {
            return (char *)s ;
        }
        s++;
    }   
    if (ch == '\0')
    {
        return (char *)s ;
    }
    
    return NULL ;
    
}
// int main(void){
//     printf("%s\n" , ft_strchr("hello" , 1024) ) ;
//     printf("%s" , strchr("hello"  , 1024) ) ;
// }
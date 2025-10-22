/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bakh <mel-bakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 13:39:15 by mel-bakh          #+#    #+#             */
/*   Updated: 2025/10/22 10:15:03 by mel-bakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char *ft_strchr(const char *s, int c)
{
    while (*s)
    {
        if (*s == c)
        {
            return (char *)s ;
        }
        s++;
    }   
    if (c == '\0')
    {
        return (char *)s ;
    }
    
    return NULL ;
    
}

int main(void){
    char *s = "hello" ;
    char c = 'l' ; 
    char *test = ft_strchr(s , c) ; 
    printf("%s" , test) ; 
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bakh <mel-bakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 13:07:31 by mel-bakh          #+#    #+#             */
/*   Updated: 2025/10/25 13:22:09 by mel-bakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int len = 0 ; 
    if (!s || !f)
        return  ; 

    while (s[len])
    {
        len++;
    }

    unsigned int i = 0 ; 
    while (i < len)
    {
        f(i , &s[i]) ;
        i++ ; 
    }
 
}


void test(unsigned int i,  char *c)
{
    *c = *c + i ;
    
}

int main(){
    char str[] = "a" ;
    ft_striteri(str , test) ; 

    printf("%s\n" , str ) ;
}
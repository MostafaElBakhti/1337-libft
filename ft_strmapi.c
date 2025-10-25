/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bakh <mel-bakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 12:10:35 by mel-bakh          #+#    #+#             */
/*   Updated: 2025/10/25 12:43:45 by mel-bakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include <stdlib.h>
#include <stdio.h>




char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int len = 0 ;
    char *str ;
    
    if(!s || !f){
        return NULL ; 
    }
    

    while (s[len])
        len++ ;
    printf("len : %d\n" , len ) ;
    str = malloc(len + 1 ) ;

    if(!str)
        return NULL ; 

    int i = 0 ; 
    while (i < len)
    {
        str[i] = f(i , s[i]) ;
        i++ ; 
    }
    
    str[len] = '\0' ; 
    
    return str ;
    
}


char test(unsigned int i, char c)
{
    (void)i;
    if (c >= 'a' && c <= 'z')
        return (c - 32);
    else
        return (c);
   
}

int main()
{
    char str[] = "hello World!" ;
    char *result = ft_strmapi(str, test);
    printf("Result: %s\n", result);
    free(result) ; 
    return 0 ;
}  
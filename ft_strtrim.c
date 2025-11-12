/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bakh <mel-bakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 11:47:06 by mel-bakh          #+#    #+#             */
/*   Updated: 2025/11/12 06:17:05 by mel-bakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

  

char *ft_strtrim(char const *s1, char const *set){
    if (!set || !s1)
    {
        return NULL ; 
    }

    while (*s1 && ft_strchr(set , *s1))
        s1++ ;
    
    size_t len = ft_strlen(s1) ; 

    while (len > 0 && ft_strchr(set , s1[len-1]))
    {
        len-- ; 
    }
    
    char *copy = malloc(len + 1 ) ; 
    if(!copy)
        return NULL; 
    
    ft_memcpy(copy , s1 , len) ; 
    copy[len] = '\0' ; 

    return copy ; 
    
    
}

// int  main(){
//     char *s1 = "//hello world//" ;
//     char *set = "/" ;
//     char *test = ft_strtrim(s1 , set) ;
//     printf("final results is :%s\n" , test) ;

// }   

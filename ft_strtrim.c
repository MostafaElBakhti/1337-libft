/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bakh <mel-bakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 11:47:06 by mel-bakh          #+#    #+#             */
/*   Updated: 2025/10/23 18:15:27 by mel-bakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int is_in_set(char c , char const *set){
    while (*set){
        if (c == *set)
            return 1 ;
        set++ ;
    }
    return 0 ;
}


char *ft_strtrim(char const *s1, char const *set){
    if(!s1 || !set)
        return NULL ;
    
    while(*s1 && is_in_set(*s1 , set))
        s1++ ;

    size_t len = ft_strlen(s1) ;
    printf("len after leading trim: %zu\n", len); // test line
    
    while (len > 0 && is_in_set(s1[len -1] , set))
    {
        len-- ;
    }
    printf("len after trailing trim: %zu\n", len); // test line

    char *str = (char *)malloc(len + 1) ;
    if (!str)
        return NULL ;
    
    ft_memcpy(str , s1 , len) ;
    str[len] = '\0' ;
    return str ;
    
}

// int  main(){
//     char *s1 = "**hello /world***//" ;
//     char *set = "*/" ;
//     char *test = ft_strtrim(s1 , set) ;
//     printf("final results is :%s\n" , test) ;
    

//     return 0 ;
// }   
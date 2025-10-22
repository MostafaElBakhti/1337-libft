/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bakh <mel-bakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 11:47:06 by mel-bakh          #+#    #+#             */
/*   Updated: 2025/10/22 15:38:42 by mel-bakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

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
    while(len > 0 && is_in_set(s1[len - 1] , set))
        len-- ;
    
    char *trimmed_str = (char *)malloc(sizeof(char) * (len + 1)) ;
    if (!trimmed_str)
        return NULL ;
    
    for (size_t i = 0 ; i < len ; i++)
        trimmed_str[i] = s1[i] ;
    trimmed_str[len] = '\0' ;
    return trimmed_str ;
    
    
}

int  main(){
    char *s1 = "  hello world  " ;
    char *set = " " ;
    char *test = ft_strtrim(s1 , set) ;
    printf("%s\n" , test) ;
    

    return 0 ;
}
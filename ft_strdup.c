/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bakh <mel-bakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 10:20:05 by mel-bakh          #+#    #+#             */
/*   Updated: 2025/10/22 11:55:07 by mel-bakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char    *ft_strdup(const char *s1){
    size_t len = ft_strlen(s1) ;
    char *copy = malloc(len + 1 ) ;

    if (!copy)
        return NULL ;
    
    ft_memcpy(copy , s1 , len) ; 

    copy[len] = '\0';  
    return copy ;
    
}


int main(void){
    char *s1 = "hello" ; 
    char *test = ft_strdup(s1) ; 
    printf("%s" , test ) ; 
    
    return 0 ; 
}
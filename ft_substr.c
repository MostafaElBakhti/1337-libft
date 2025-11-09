/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bakh <mel-bakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 11:19:24 by mel-bakh          #+#    #+#             */
/*   Updated: 2025/10/22 11:36:06 by mel-bakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>


char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    // ! check
    if (!s)
        return NULL;
    
    // ! check
    if (start >= ft_strlen(s))
        return ft_strdup(""); 

    size_t s_len = ft_strlen(s) ; // 11
    printf("%d\n" , s_len);

    size_t substr_len ;
    if (s_len - start < len) // 11-6 < 6 false
    {
        substr_len = s_len - start ;
    }else{
        substr_len = len ; //true  so substr_len = 6 
    }

    char *ptr = malloc(substr_len + 1) ; 
    if(!ptr)
        return NULL ; 

    ft_memcpy(ptr , (s+start) , substr_len) ; 
    ptr[substr_len] = '\0' ; 
    
    return ptr ;
}

// int main(void){
//     char s[] = "hello world" ;
//     char *test = ft_substr(s ,3 , 6) ;
//     printf("%s" , test) ; 
    
// }

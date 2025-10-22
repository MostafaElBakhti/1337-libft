/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft_strjoin.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bakh <mel-bakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 11:36:33 by mel-bakh          #+#    #+#             */
/*   Updated: 2025/10/22 11:44:55 by mel-bakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char *ft_strjoin(char const *s1, char const *s2){
    if(!s1 || !s2)
        return NULL ;
    
    size_t len1 = ft_strlen(s1) ;
    size_t len2 = ft_strlen(s2) ;
    size_t total_len = len1 + len2 ;
    char *all_str = (char *)malloc(total_len + 1) ;
    if (!all_str)
        return NULL ;
    ft_memcpy(all_str , s1 , len1) ;
    ft_memcpy(all_str + len1 , s2 , len2) ;
    all_str[total_len] = '\0' ;
    return all_str ;
}

int main(void){
    char *s1 = "hello " ;
    char *s2 = "world!" ;
    char *test = ft_strjoin(s1 , s2) ;
    printf("%s\n" , test) ;
}
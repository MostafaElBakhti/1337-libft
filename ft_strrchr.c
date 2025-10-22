/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bakh <mel-bakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 13:39:38 by mel-bakh          #+#    #+#             */
/*   Updated: 2025/10/22 10:15:31 by mel-bakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"



char *strrchr(const char *s, int c){
    const char *test = NULL ;
    while (*s)
    {
        if (*s == c)
        {
            test = s ;
        }
        s++ ;
    }

    if(c == '\0')
        return (char *)s ;

    return (char *)test ;
}


int main(void){
    char *s = "test" ;
    char c = 'e' ; 
    char *test = strrchr(s , c) ; 
    printf("%s" , test) ; 
}
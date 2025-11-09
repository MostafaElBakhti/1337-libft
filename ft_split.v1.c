/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bakh <mel-bakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 18:20:51 by mel-bakh          #+#    #+#             */
/*   Updated: 2025/10/23 21:34:55 by mel-bakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

    #include "libft.h"
    #include <stdlib.h>
    #include <stdio.h>
    #include <string.h>

    size_t check_word(char const *s, char c)
    {
        size_t count = 0 ; 
        int in_word = 0 ; 
        while (*s)
        {
            if (*s != c && in_word == 0)
            {
                in_word = 1 ;
                count++ ;
            }else if(*s == c){
                in_word = 0 ;
            }
        s++ ;
        }
        return count ;

    }

    size_t words_len(const char *s , char c)
    {
        size_t len = 0 ; 
        while (s[len] && s[len] != c)
        {
            len++ ;
        }
        return len ;
    }
    char **ft_split(char const *s, char c)
    {
        size_t len ;
        size_t i = 0  ;
        size_t words = check_word(s , c) ; 
        char **ptr = malloc((words + 1 ) * sizeof(char *)) ;
        if(!ptr){
            return NULL ;
        }

            while(*s)
            {
                while (*s == c)
                    s++ ;
                
                if (*s)
                {
                    len = words_len(s, c) ;
                    ptr[i] = malloc((len + 1 ) * sizeof(char)) ;
                    memcpy(ptr[i] , s , len ) ; 
                    ptr[i][len] = '\0' ;
                    i++ ; 
                    s+= len ;
                }
            }
        ptr[i] = NULL ; 
        return ptr ; 
        
    }


    // int main(void)
    // {
    //     char *s = "hello world this is ft_split";
    //     char c = ' ';
    //     char **test = ft_split(s, c);
        // for (size_t i = 0; test[i] != NULL; i++)
        // {
        //     printf("Word %zu: %s\n", i, test[i]);
        // }
        
    //     return 0;
    // }

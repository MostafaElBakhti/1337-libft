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

    size_t check_word(char const *s, char c)
    {

        size_t count = 0;
        int in_word = 0;
        while (*s)
        {
            if (*s != c && in_word == 0)
            {
                in_word = 1;
                count++;
            }
            else if (*s == c)
                in_word = 0;
            s++;
        }
        printf("Total words: %zu\n", count); 
        return count;
    }

    char **ft_split(char const *s, char c)
    {
        if (!s)
            return NULL;

        size_t words = check_word(s, c);
        char **ptr = malloc(sizeof(char *) * (words + 1));
        if (!ptr)
            return NULL;
        
        size_t i = 0;
        while (*s)
        {
            while (*s == c)
                s++ ; 

            size_t len = 0;
            while (s[len] && s[len] != c)  
                len++;

            char *word = malloc(len + 1);
            if (!word)
                return NULL;
            ft_memcpy(word, s , len);
            word[len] = '\0';
            ptr[i++] = word;
            
            s+= len ;
        }
        ptr[i] = NULL;
        return ptr;
    }

    int main(void)
    {
        char *s = "hello world this is ft_split";
        char c = ' ';
        char **test = ft_split(s, c);
        // for (size_t i = 0; test[i] != NULL; i++)
        // {
        //     printf("Word %zu: %s\n", i, test[i]);
        // }
        
        return 0;
    }

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

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *substr;
    size_t  s_len;

    if (!s)
        return (NULL);

    s_len = ft_strlen(s);
    if (start >= s_len)
        return (ft_strdup(""));

    if (len > s_len - start)
        len = s_len - start;

    substr = (char *)malloc(len + 1);
    if (!substr)
        return (NULL);

    ft_memcpy(substr, s + start, len);
    substr[len] = '\0';
    return (substr);
}

// int main(void){
//     char *s = "hello world" ;
//     char *test = ft_substr(s , 3 , 6) ;
//     printf("%s" , test) ; 
    
// }
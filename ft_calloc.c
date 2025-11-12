/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bakh <mel-bakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 16:52:20 by mel-bakh          #+#    #+#             */
/*   Updated: 2025/11/12 06:09:25 by mel-bakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void *ft_calloc(size_t count, size_t size){
    // if bzaaaf return NULL ;
    size_t total = count * size ; 
    char *ptr = malloc(total) ; 
    if (!ptr)
    {
        return NULL ; 
    }
    // size_t i = 0 ;
    ft_bzero(ptr ,total ) ; 

    return ptr ; 
    
}

// int main(){
//     char *test = ft_calloc(3, sizeof(char));

//     for (int i = 0; i < 3; i++)
//         printf("%d ", test[i]); 

//     free(test);
//     return 0;
// }
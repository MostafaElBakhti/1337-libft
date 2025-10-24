/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bakh <mel-bakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 16:52:20 by mel-bakh          #+#    #+#             */
/*   Updated: 2025/10/22 10:14:24 by mel-bakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void *ft_calloc(size_t count, size_t size){
    size_t total = count * size ; 
    unsigned char *ptr = malloc(total) ; 
    if (ptr == NULL) return NULL;
    size_t i = 0;
    while (i < total)
    {
        ptr[i++] = 0;  
    }

    return ptr ; 
}

int main(){
    int *test = ft_calloc(3 , sizeof(int)) ; 
}
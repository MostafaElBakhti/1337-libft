/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bakh <mel-bakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 16:30:24 by mel-bakh          #+#    #+#             */
/*   Updated: 2025/10/16 16:43:59 by mel-bakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *memcpy(void *restrict dst, const void *restrict src, size_t n){
    
}

int main(){
    char src = "hello" ;
    char dst[10] ;
    char *test = memcpy(dst , src , 5);
    printf("%s\n" , dst) ; 
}
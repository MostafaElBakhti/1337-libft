/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bakh <mel-bakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 19:16:49 by mel-bakh          #+#    #+#             */
/*   Updated: 2025/10/23 20:19:02 by mel-bakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

size_t count_len(int c)
{
    size_t len = 0 ;
    long num = c ;
    if (num <= 0)
    {
        len = 1 ;
    }

    while (num)
    {
        num/= 10 ;
        len++ ; 
    }
    return len ; 
}

char *ft_itoa(int n){

    size_t len = count_len(n) ; 
    // printf("length : %d" , len ) ; 

    char *ptr = malloc((len + 1)  * sizeof(char)) ; 
    if(!ptr)
        return NULL ; 
    
    ptr[len] = '\0' ; 

    long num = n ; 
    if(num == 0)
        ptr[0] = '0' ;
    if(num < 0 ){
        ptr[0] = '-' ;
        num = -num ;
    }

    while (num > 0)
    {
        
        len-- ;
        ptr[len] = (num % 10) + '0' ;
        num/= 10 ;
    }
    
    return ptr ; 
}

int main(void){
    int num = -12345 ;
    char *str = ft_itoa(num) ;
    printf("%s\n" , str) ;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bakh <mel-bakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 13:38:58 by mel-bakh          #+#    #+#             */
/*   Updated: 2025/10/22 10:14:39 by mel-bakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>


int ft_isdigit(int c){
    if((c >= '0' && c <= '9')  ){
        return 1 ; 
    }
    return 0 ;
}


int main(void  ){
    // for (int i = '0'; i <= '9'; i++)
    // printf("%c -> my: %d, original: %d\n", i, ft_isdigit(i), isdigit(i));

    for (int i = '0'; i < '9'; i++)
    {
        printf("%c -> my : %d , original : %i\n" , i , ft_isdigit(i) ,isdigit(i) ) ; 
    }
    

    // printf("my function : -> %d\n", ft_isdigit(2)) ; 
    // printf("original : -> %d\n", isdigit(2)) ; 
    // printf("my function : -> %d\n", ft_isdigit('a')) ; 
    // printf("original : -> %d\n", isdigit('a')) ; 

    return 0 ;   
}
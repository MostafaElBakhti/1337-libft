/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bakh <mel-bakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 13:38:40 by mel-bakh          #+#    #+#             */
/*   Updated: 2025/11/12 06:06:46 by mel-bakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int ft_isalnum(int c){
    if((c >= 'a' && c <= 'z') ||(c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9') ){
        return 1 ; 
    }
    return 0 ;
}


// int main(void  ){
//     for (int i = '0'; i <= '9'; i++)
//         printf("%c -> my : %d , original : %i\n" , i , ft_isalnum(i) ,isalnum(i) ) ;
    
//     // printf("%d\n", ft_isalnum(2)) ; 
//     // printf("%d\n", ft_isalnum('a')) ; 
//     // printf("%d\n", ft_isalnum('s')) ; 
//     // printf("%d\n", ft_isalnum('0')) ; 
//     // printf("%d\n", ft_isalnum(' ')) ; 
//     return 0 ;   
// }
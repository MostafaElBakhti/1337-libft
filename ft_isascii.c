/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bakh <mel-bakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 13:38:53 by mel-bakh          #+#    #+#             */
/*   Updated: 2025/11/12 06:06:52 by mel-bakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>


int ft_isascii(int c){
    if((c >= 0 && c <= 127)  ){
        return 1 ; 
    }
    return 0 ;
}

// int main(void  ){
//     for (int i = 0; i <= 255; i++)
//         printf("%d -> my : %d , original : %i\n" , i , ft_isascii(i) ,isascii(i) ) ;
    

//     return 0 ;   
// }
    // printf("%d\n", ft_isalnum(2)) ; 
    // printf("%d\n", ft_isalnum('a')) ; 
    // printf("%d\n", ft_isalnum('s')) ; 
    // printf("%d\n", ft_isalnum('0')) ; 
    // printf("%d\n", ft_isalnum(' ')) ; 
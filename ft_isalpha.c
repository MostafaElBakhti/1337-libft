/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bakh <mel-bakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 13:38:46 by mel-bakh          #+#    #+#             */
/*   Updated: 2025/10/22 10:14:32 by mel-bakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>


int ft_isalpha(int c){
    if((c >= 'a' && c <= 'z') ||(c >= 'A' && c <= 'Z') ){
        return 1 ; 
    }
    return 0 ;
}


// int main(void  ){
//     printf("%d\n", ft_isalpha(2)) ; 
//     printf("%d\n", ft_isalpha('a')) ; 
//     printf("%d\n", ft_isalpha('s')) ; 
//     printf("%d\n", ft_isalpha('0')) ; 
//     return 0 ;   
// }
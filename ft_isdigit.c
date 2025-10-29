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


int ft_isdigit(int c){
    if((c >= '0' && c <= '9')  ){
        return 1 ; 
    }
    return 0 ;
}


// int main(void  ){
//     printf("%d\n", ft_isdigit(2)) ; 
//     printf("%d\n", ft_isdigit('a')) ; 
//     printf("%d\n", ft_isdigit('s')) ; 
//     printf("%d\n", ft_isdigit('0')) ; 
//     printf("%d\n", ft_isdigit('5')) ; 
//     return 0 ;   
// }
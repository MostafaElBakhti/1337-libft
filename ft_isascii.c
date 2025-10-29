/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bakh <mel-bakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 13:38:53 by mel-bakh          #+#    #+#             */
/*   Updated: 2025/10/22 10:14:37 by mel-bakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


int ft_isascii(int c){
    if((c >= 0 && c <= 127)  ){
        return 1 ; 
    }
    return 0 ;
}


// int main(void  ){
//     printf("%d\n", ft_isascii(2)) ; 
//     printf("%d\n", ft_isascii('a')) ; 
//     printf("%d\n", ft_isascii('s')) ; 
//     printf("%d\n", ft_isascii('0')) ; 
//     printf("%d\n", ft_isascii('5')) ; 
//     return 0 ;   
// }
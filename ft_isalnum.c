/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bakh <mel-bakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 13:38:40 by mel-bakh          #+#    #+#             */
/*   Updated: 2025/10/22 10:14:28 by mel-bakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int ft_isalnum(int c){
    if((c >= 'a' && c <= 'z') ||(c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9') ){
        return 1 ; 
    }
    return 0 ;
}


// int main(void  ){
//     printf("%d\n", ft_isalnum(2)) ; 
//     printf("%d\n", ft_isalnum('a')) ; 
//     printf("%d\n", ft_isalnum('s')) ; 
//     printf("%d\n", ft_isalnum('0')) ; 
//     printf("%d\n", ft_isalnum('    ')) ; 
//     return 0 ;   
// }
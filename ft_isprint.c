/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bakh <mel-bakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 13:39:02 by mel-bakh          #+#    #+#             */
/*   Updated: 2025/10/22 10:14:42 by mel-bakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>


int ft_isprint(int c){
    if((c >= 32 && c <= 126)  ){
        return 1 ; 
    }
    return 0 ;
}


int main(void  ){
    printf("%d\n", ft_isprint(2)) ; 
    printf("%d\n", ft_isprint('a')) ; 
    printf("%d\n", ft_isprint('s')) ; 
    printf("%d\n", ft_isprint('0')) ; 
    printf("%d\n", ft_isprint('5')) ; 
    return 0 ;   
}
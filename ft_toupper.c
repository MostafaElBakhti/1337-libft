/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bakh <mel-bakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 13:39:47 by mel-bakh          #+#    #+#             */
/*   Updated: 2025/10/23 17:40:45 by mel-bakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_toupper(int c){
    if (c >= 97 && c <= 122)
    {
        return c - 32 ;    
    }
    

    return c; 
}

// int main(void){
//     char c1 = 'a';
//     char c2 = 'Z';
//     char c3 = '5';

//     printf("%c\n", ft_toupper(c1)); 
//     printf("%c\n", ft_toupper(c2)); 
//     printf("%c\n", ft_toupper(c3)); 
// }
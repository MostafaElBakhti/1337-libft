/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bakh <mel-bakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 13:39:42 by mel-bakh          #+#    #+#             */
/*   Updated: 2025/10/19 13:39:43 by mel-bakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <stdio.h>

int ft_tolower(int c){
    if (c >= 'A' && c <= 'Z')
    {
        return c + 32 ;    
    }
    

    return c; 
}

int main(void){
    char c1 = 'A';
    char c2 = 'Z';
    char c3 = '5';

    printf("%c\n", ft_tolower(c1)); // a
    printf("%c\n", ft_tolower(c2)); // z
    printf("%c\n", ft_tolower(c3)); // 5
}
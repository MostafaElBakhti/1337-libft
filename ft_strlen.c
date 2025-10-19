/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bakh <mel-bakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 13:39:28 by mel-bakh          #+#    #+#             */
/*   Updated: 2025/10/19 13:39:29 by mel-bakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <stdio.h>

int ft_strlen(const char *s){
    int i = 0 ;
    while (*s)
    {
        i++;
        s++;
    }
    return i ; 
}   


int main(void){
    char *str = "test" ;
    int test = ft_strlen(str) ;
    printf("%d\n" , test);
}

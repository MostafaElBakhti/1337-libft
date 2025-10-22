/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bakh <mel-bakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:52:49 by mel-bakh          #+#    #+#             */
/*   Updated: 2025/10/22 10:14:16 by mel-bakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_bzero(void *s, size_t n)
{
    size_t          i;
    unsigned char   *p;

    p = (unsigned char *)s;
    i = 0;
    while (i < n)
    {
        p[i] = 0;
        i++;
    }
}

// int main(){
//     char s[5] ;
//     ft_bzero(s , 5) ; 
//     for (int i = 0; i < 5; i++)
//         printf("%d ", s[i]);
// }
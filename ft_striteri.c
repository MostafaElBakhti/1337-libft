/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bakh <mel-bakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 12:06:42 by mel-bakh          #+#    #+#             */
/*   Updated: 2025/11/12 06:26:38 by mel-bakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	if (!s || !f)
		return ;

	unsigned int i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// void to_upper(unsigned int i , char *c)
// {
//     (void)i ; 
// 	if (*c >= 'a' && *c <= 'z')
// 		*c = *c - 32;

// }

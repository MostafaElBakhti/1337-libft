/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bakh <mel-bakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:07:25 by mel-bakh          #+#    #+#             */
/*   Updated: 2025/10/22 10:15:07 by mel-bakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>


void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*pointer;

	pointer = (unsigned char *)b;	
	i = 0;
	while (i < len)
	{
		pointer[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

int	main(void)
{
	char	s[6];

	// ft_memset(s, 300, 5);
	ft_memset(s, 0, 5);
	s[5] = '\0';
	printf(" my : %s\n", s);
	return (0);
}

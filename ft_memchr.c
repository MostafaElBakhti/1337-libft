/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bakh <mel-bakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 13:40:48 by mel-bakh          #+#    #+#             */
/*   Updated: 2025/10/22 10:14:45 by mel-bakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*cs;
	unsigned char	cc;
	size_t			i;

	if (!s || !n)
		return (NULL);
	cs = (unsigned char *)s;
	cc = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (cs[i] == cc)
			return ((void *)&cs[i]);
		i++;
	}
	return (NULL);
}
// void	*ft_memchr(const void *s, int c, size_t n)
// {
// 	size_t				i;
// 	unsigned char		*ptr;

// 	ptr = (unsigned char *)s;
// 	i = 0;
// 	while (i < n)
// 	{
// 		if (ptr[i] == (unsigned char)c)
// 			return ((void *)&ptr[i]);
// 		i++;
// 	}
// 	return (NULL);
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bakh <mel-bakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 13:39:38 by mel-bakh          #+#    #+#             */
/*   Updated: 2025/11/12 08:25:34 by mel-bakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char		*test;
	unsigned char	ch;

	test = NULL;
	ch = (unsigned char)c;
	while (*s)
	{
		if (*s == ch)
			test = s;
		s++;
	}
	if (ch == '\0')
		return ((char *)s);
	return ((char *)test);
}

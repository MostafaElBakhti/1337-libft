/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bakh <mel-bakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 11:36:33 by mel-bakh          #+#    #+#             */
/*   Updated: 2025/11/12 05:47:36 by mel-bakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	char	*result;

	if (s1 != NULL)
		len1 = ft_strlen(s1);
	else
		len1 = 0;
	if (s2 != NULL)
		len2 = ft_strlen(s2);
	else
		len2 = 0;
	result = (char *)malloc(len1 + len2 + 1);
	if (!result)
		return (NULL);
	if (s1 != NULL)
		ft_memcpy(result, s1, len1);
	if (s2 != NULL)
		ft_memcpy(result + len1, s2, len2);
	result[len1 + len2] = '\0';
	return (result);
}

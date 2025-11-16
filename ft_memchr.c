/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bakh <mel-bakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 13:40:48 by mel-bakh          #+#    #+#             */
/*   Updated: 2025/11/12 06:07:41 by mel-bakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*cs;
	unsigned char	cc;
	size_t			i;

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

// int main()
// {
// 	int arr[]={3456776465,57,265,24524};
// 	printf(" 0 : %p\n", arr);
// 	int *res = ft_memchr(arr,57,sizeof(arr));
// 	// printf("%d",*res);
// }

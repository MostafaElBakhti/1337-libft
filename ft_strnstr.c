/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bakh <mel-bakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 14:10:32 by mel-bakh          #+#    #+#             */
/*   Updated: 2025/11/12 06:08:30 by mel-bakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	if (!*to_find)
	{
		return (char *)str ;
	}
	size_t i = 0 ; 
	size_t j ; 
	while (i < len && str[i])
	{
		j = 0 ;
		while (to_find[j] && (i + j) < len && str[i + j] == to_find[j])
		{
			j++ ;
		}
		if(!to_find[j])
			return ((char *)(str + i)) ;

		i++ ; 
	}
	
	return NULL ; 

}

// int main(){
// 	char str[] = "hello world" ; 
// 	char to_find[] = "world" ; 
// 	char *test = ft_strnstr(str , to_find , sizeof(str)) ; 
// 	printf("%s" , test) ; 
// }

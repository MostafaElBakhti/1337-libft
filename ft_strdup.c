/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bakh <mel-bakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 10:20:05 by mel-bakh          #+#    #+#             */
/*   Updated: 2025/11/12 03:10:46 by mel-bakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*new_str;
	size_t	i;

	new_str = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!new_str || !s)
		return (NULL);
	i = 0;
	while (s[i])
	{
		new_str[i] = s[i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
// int main(void){
//     char *s1 = "hello" ; 
//     char *test = ft_strdup(s1) ; 
//     printf("%s" , test ) ; 
//     return 0 ; 
// }

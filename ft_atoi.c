/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bakh <mel-bakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 15:37:15 by mel-bakh          #+#    #+#             */
/*   Updated: 2025/10/22 10:14:13 by mel-bakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
	int result = 0;
	int sign = 1;
	size_t i = 0;

	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;

	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}

	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}

	return result * sign;
}

#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("%d\n", atoi("42"));         
    printf("%d\n", atoi("   -123"));    
    printf("%d\n", atoi("+456abc"));    
    printf("%d\n", atoi("0"));          
    printf("%d\n", atoi("  007"));      
    return 0;
}

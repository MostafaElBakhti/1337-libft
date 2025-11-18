/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bakh <mel-bakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 15:37:15 by mel-bakh          #+#    #+#             */
/*   Updated: 2025/11/12 06:06:34 by mel-bakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_itsspace(char c)
{
	return ((c >= 9 && c <= 13) || c == 32);
}

int	ft_atoi(const char *str)
{
	long long	tmp;
	long long	value;
	int			sign;

	value = 0;
	sign = 1;
	while (ft_itsspace(*str))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -sign;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		tmp = value;
		value = value * 10 + (*str - '0');
		if (value < tmp && sign == 1)
			return (-1);
		if (value < tmp && sign == -1)
			return (0);
		str++;
	}
	return ((int)value * sign);
}

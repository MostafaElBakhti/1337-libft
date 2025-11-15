/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bakh <mel-bakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 19:16:49 by mel-bakh          #+#    #+#             */
/*   Updated: 2025/11/12 06:26:15 by mel-bakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_len(int c)
{
	size_t		len;
	long long	num;

	len = 0;
	num = c;
	if (num <= 0)
		len = 1;
	if (num < 0)
		num = -num;
	while (num)
	{
		num /= 10;
		len++;
	}
	return (len);
}

static void	fill_digits(char *ptr, long long num, size_t len)
{
	while (num > 0)
	{
		len--;
		ptr[len] = (num % 10) + '0';
		num /= 10;
	}
}

char	*ft_itoa(int n)
{
	size_t		len;
	char		*ptr;
	long long	num;

	len = count_len(n);
	ptr = malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	ptr[len] = '\0';
	num = n;
	if (num == 0)
		ptr[0] = '0';
	if (num < 0)
	{
		ptr[0] = '-';
		num = -num;
	}
	if (num > 0)
		fill_digits(ptr, num, len);
	return (ptr);
}

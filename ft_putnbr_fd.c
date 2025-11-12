/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bakh <mel-bakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 12:30:01 by mel-bakh          #+#    #+#             */
/*   Updated: 2025/11/12 06:15:12 by mel-bakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	big;

	big = n;
	if (big < 0)
	{
		big = -big;
		ft_putchar_fd('-', fd);
	}
	if (big >= 10)
		ft_putnbr_fd(big / 10, fd);
	ft_putchar_fd((big % 10) + 48, fd);
}
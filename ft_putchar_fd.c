/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bakh <mel-bakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 12:11:39 by mel-bakh          #+#    #+#             */
/*   Updated: 2025/11/12 09:14:07 by mel-bakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void ft_putchar_fd(char c, int fd)
{
    write(fd,&c,1) ; 
}

// int main()
// {
//     int fd = open("test.txt", O_CREAT | O_WRONLY | O_APPEND, 0777);
//     ft_putchar_fd('c',1) ;
//     close(fd) ;
// }
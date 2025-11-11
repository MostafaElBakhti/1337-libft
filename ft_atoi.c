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

#include <stdio.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h> // atoi original
#include "libft.h"   // ft_atoi


#include "libft.h"

static int	ft_itsspace(char c)
{
	return ((c >= 9 && c <= 13) || c == 32);
}

int	ft_atoi(const char *str)
{
	long long tmp ; 
	long long value = 0 ; 
	int sign = 1 ;

	while (ft_itsspace(*str))
	{
		str++ ; 
	}

	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
		{
			sign = -sign ;
		}
		str++ ; 
	}
	
	while (*str >= '0' && *str <= '9')
	{
		tmp = value ; 
		value = value * 10 + (*str - '0') ;

		if(value < tmp && sign == 1){
			return (-1) ; // overflow positif 
		}
		if(value < tmp && sign == -1){
			return (0) ; // overflow negative 
		}
		str++ ; 
	}
	
	return ((int)value * sign) ;
	
}
// 2147483640 =	0111 1110	1010 0100	0101 1101	1000 1000
//	add 9     	0000 0000	0000 0000	0000 0000	0000 1001 
// ------------------------------------------------------------
//	=== =     	0111 1110	1010 0100	0101 1101	1001 0001 









// static int	ft_itsspace(char c)
// {
// 	return ((c >= 9 && c <= 13) || c == 32);
// }

// int	ft_atoi(const char *nptr)
// {
// 	int				s;
// 	long long		cv;
// 	long long		temp;

// 	s = 1;
// 	cv = 0;
// 	while (ft_itsspace(*nptr))
// 		nptr++;
// 	if (*nptr == '+' || *nptr == '-')
// 	{
// 		if (*nptr == '-')
// 			s = -s;
// 		nptr++;
// 	}
// 	while (*nptr >= '0' && *nptr <= '9')
// 	{
// 		temp = cv;
// 		cv = (cv * 10) + (*nptr - 48);
// 		if (cv < temp && s == 1)
// 			return (-1);
// 		if (cv < temp && s == -1)
// 			return (0);
// 		nptr++;
// 	}
// 	return ((int)cv * s);
// }


int main(void)
{
	printf("Test 1: %d\n", ft_atoi("9223372036854775807"));
	printf("Test 1: %d\n", atoi("9223372036854775807"));
	printf("========= new test ==========\n") ;
	printf("Test 7: %d\n", ft_atoi("21474836488"));
	printf("Test 7: %d\n", atoi("21474836488"));
	printf("========= new test ==========\n") ;
	printf("Test 7: %d\n", ft_atoi("9223372036854775807"));
	printf("Test 7: %d\n", atoi("9223372036854775807 "));
	printf("========= new test ==========\n") ;
	printf("Test 7: %d\n", ft_atoi("-21474836489"));
	printf("Test 7: %d\n", atoi("-21474836489"));
	printf("========= new test ==========\n") ;
	printf("Test 7: %d\n", ft_atoi("-2147483648900"));
	printf("Test 7: %d\n", atoi("-2147483648900"));

}



//  011111111 111111111 111111111 111111111
//+ 							  000000001
// _________________________________________
//=100000000  000000000 000000000 000000000   = ??
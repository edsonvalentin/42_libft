/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evalenti <evalenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 16:45:26 by evalenti          #+#    #+#             */
/*   Updated: 2023/04/22 16:39:53 by evalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
** Function name: ft_atoi
** Library: libft.h
** Description: convert a string to an integer
** Return value: the integer or 0 if the string is not a number
** External functs: none
*/

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	num;
	int	sign;
	
	sign = 1;
	while (*str == 32 || (*str >= 8 && *str <= 13))
		str++;
	if (*str == '-')
		sign *= -1;
	if (*str == '+' || *str == '-')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		num = (*str - '0') + (num * 10);
		str++;
	}
	return (num * sign);
}

#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	int	mine;
	int	theirs;
	
	if (ac != 2)
		return (0);
	theirs = atoi(av[1]);
	mine = ft_atoi(av[1]);
	printf("atoi\t%d\n", theirs);
	printf("ft_atoi\t%d\n", mine);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evalenti <evalenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 16:49:57 by evalenti          #+#    #+#             */
/*   Updated: 2023/04/22 15:51:10 by evalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
** Function name: ft_itoa
** Library: none
** Description: Allocates (with malloc(3)) and returns a string representing
**				the integer received as an argument. Negative numbers must be 
**				handled.
** Return value: The string representing the integer. NULL if the allocation
**				fails.
** External functs: malloc
** Note: It was use libft functions: ft_strdup.
*/

#include "libft.h"

int	ft_nbrlen(int n)
{
	int	i;

	i = 1;
	while (n / 10)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

int	ft_is_negative(int n)
{
	if (n < 0)
		return (1);
	return (0);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		lenght;
	int		negative;

	negative = ft_is_negative(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	lenght = ft_nbrlen(n) + negative;
	result = (char *)malloc(sizeof(char) * (lenght + 1));
	if (!result)
		return (NULL);
	if (n < 0)
		result[0] = '-';
	if (n < 0)
		n *= -1;
	result[lenght] = '\0';
	while (lenght > negative)
	{
		lenght--;
		result[lenght] = (n % 10) + '0';
		n /= 10;
	}
	return (result);
}

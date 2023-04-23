/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evalenti <evalenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 16:43:34 by evalenti          #+#    #+#             */
/*   Updated: 2023/04/22 15:50:04 by evalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
** Function name: ft_tolower
** Library: ctype.h
** Description: convert a uppercase letter to a lowercase letter
** Return value: if c is a uppercase letter, return the lowercase letter
**			     else return c
** External functs:
*/

int ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c = c + 32;
	return (c);
}

#include <stdio.h>
#include <ctype.h>

int	main (void)
{
	char	c;
 
	c = 'A'; 
	printf("C %c\t\t\n", tolower(c));
	printf("Mine %c\t\t\n", ft_tolower(c));
	c = 'M'; 
	printf("C %c\t\t\n", tolower(c));
	printf("Mine %c\t\t\n", ft_tolower(c));
	c = '/'; 
	printf("C %c\t\t\n", tolower(c));
	printf("Mine %c\t\t\n", ft_tolower(c));
	c = 'f'; 
	printf("C %c\t\t\n", tolower(c));
	printf("Mine %c\t\t\n", ft_tolower(c));
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evalenti <evalenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 16:43:18 by evalenti          #+#    #+#             */
/*   Updated: 2023/04/22 15:50:04 by evalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
** Function name: 
** Librairy: 
** Synopsis:
** Description: 
** Return value:
*/

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c = c - 32;
	return (c); 
}

#include <stdio.h>
#include <ctype.h>

int	main (void)
{
	char	c;
 
	c = 'r'; 
	printf("C %c\t\t\n", toupper(c));
	printf("Mine %c\t\t\n", ft_toupper(c));
	c = 'i'; 
	printf("C %c\t\t\n", toupper(c));
	printf("Mine %c\t\t\n", ft_toupper(c));
	c = '*'; 
	printf("C %c\t\t\n", toupper(c));
	printf("Mine %c\t\t\n", ft_toupper(c));
	c = 'G'; 
	printf("C %c\t\t\n", toupper(c));
	printf("Mine %c\t\t\n", ft_toupper(c));
	return (0);
}

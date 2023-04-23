/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evalenti <evalenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 16:40:07 by evalenti          #+#    #+#             */
/*   Updated: 2023/04/22 16:39:53 by evalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
** Function name: ft_isalnum
** Library: ctype.h
** Description: checks for an alphanumeric character.
** Return value: 1 if c is a letter or a digit, 0 otherwise.
** External functs: none
*/

int ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= 0 && c <= 9))
		return (1);
	return (0);
}

#include <stdio.h>

int	main(void)
{
	unsigned char c = '$';
	
	printf("isalnum %c %d\n", c, ft_isalnum(c));
	return (0);
}

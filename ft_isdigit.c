/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evalenti <evalenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 16:39:50 by evalenti          #+#    #+#             */
/*   Updated: 2023/04/22 16:39:53 by evalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
** Function name: ft_isdigit
** Library: ctype.h
** Description: checks for a digit (0 through 9).
** Return value: zero if the character tests false and returns non-zero if the
**               character tests true.
** External functs: none
*/

int ft_isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	return (0);
}

#include <stdio.h>
#include <ctype.h>
#include <limits.h>
 
int main(void)
{
	for (int num = 0; num <= 9; num++)
	{
		if (ft_isdigit(num))
			printf("%d", num);
		printf("\n");
	}
    	return (0);
}

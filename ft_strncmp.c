/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evalenti <evalenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 16:44:18 by evalenti          #+#    #+#             */
/*   Updated: 2023/04/22 15:50:04 by evalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
** Function name: ft_strncmp
** Library: string.h
** Description: compares two strings s1 and s2. It compares at most the first n
**              bytes of s1 and s2.
** Return value: returns an integer greater than, equal to, or greater than zero,
**               if s1 (or the first n bytes thereof) is found, respectively, to
**               be greater than, to match, or be less than s2.
** External functs: none
*/

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < (int)n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		++i;
	}
	if (i != (int)n)
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (0);
}

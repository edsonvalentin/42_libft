/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evalenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 16:45:10 by evalenti          #+#    #+#             */
/*   Updated: 2023/04/23 17:46:30 by evalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
** Function name: ft_strnstr
** Library: string.h
** Description: locates the first occurrence of the null-terminated string
**              little in the string big, where not more than len characters
**              are searched. Characters that appear after a `\0' character are
**              not searched.
** Return value: if little is an empty string, big is returned; if little occurs
**               nowhere in big, NULL is returned; otherwise a pointer to the
**               first character of the first occurrence of little is returned.
** External functs: none
*/

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && little[j] != '\0' && i + j < len)
		{
			if (little[j + 1] == '\0')
				return ((char *)big + i);
			j++;
		}
		i++;
	}
	return (0);
}

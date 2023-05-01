/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evalenti <evalenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 16:48:59 by evalenti          #+#    #+#             */
/*   Updated: 2023/04/22 16:59:02 by evalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
** Function name: ft_str
** Library: none
** Description: Allocates (with malloc(3)) and returns a string from 
**              the string ’s’. The string begins at index ’start’ and is
**              of maximum size ’len’.
** Return value: The string. NULL if the allocation fails.
** External functs: malloc
** Notes: used libft functions: ft_strlen and ft_strdup
*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	size;

	if (!s)
		return (NULL);
	i = 0;
	size = ft_strlen(s);
	if (start > size)
		return (ft_strdup(""));
	if (len > size)
		len = size;
	str = (char *)malloc (sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while (s[i] != '\0' && i < len)
		str[i++] = s[start++];
	str[i] = '\0';
	return (str);
}

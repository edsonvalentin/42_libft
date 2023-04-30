/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evalenti <evalenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 16:48:59 by evalenti          #+#    #+#             */
/*   Updated: 2023/04/22 16:59:02 by evalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
** Function name: ft_substr
** Library: none
** Description: Allocates (with malloc(3)) and returns a substring from 
**              the string ’s’. The substring begins at index ’start’ and is
**              of maximum size ’len’.
** Return value: The substring. NULL if the allocation fails.
** External functs: malloc
** Notes: used libft functions: ft_strlen and ft_strdup
*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	slen;
	size_t	i;

	i = 0;
	slen = ft_strlen(s);
	if (s == NULL)
		return (NULL);
	if (start >= slen)
		return (strdup(""));
	substr = (char *)malloc (sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	while (s[start + i] != '\0' && i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

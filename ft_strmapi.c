/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evalenti <evalenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 16:50:07 by evalenti          #+#    #+#             */
/*   Updated: 2023/05/08 19:38:32 by evalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
** Function name: ft_strmapi 
** Library: none
** Description: Applies the function ’f’ to each character of the string ’s’
**				 and passes its index as the first argument to create a new 
**				string a new string (with malloc(3)) resulting from successive 
**				applications of ’f’.
** Return value: The string created from the successive applications of ’f’. 
**               Returns NULL if the allocation fails.
** External functs: malloc
** Notes: It was used the function ft_strlen.
*/

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

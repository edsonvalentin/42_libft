/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evalenti <evalenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 16:49:44 by evalenti          #+#    #+#             */
/*   Updated: 2023/04/22 15:51:10 by evalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
** Function name: ft_split
** Library: none
** Description: allocates (with malloc(3)) and returns an array of strings
**              obtained by splitting ’s’ using the character ’c’ as a delimiter.
**              The array must be ended by a NULL pointer.
** Return value: The array of new strings resulting from the split. NULL if the
**               allocation fails.
** External functs: malloc
*/

#include "libft.h"

static size_t	ft_count_words(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s != '\0')
	{
		while (*s == c && *s != '\0')
			s++;
		if (*s)
			count++;
		while (*s != c && *s != '\0')
			s++;
	}
	return (count);
}

static size_t	ft_word_length(char const *s, char c)
{
	size_t	lenght;

	lenght = 0;
	while (*s && *s != c)
	{
		lenght++;
		s++;
	}
	return (lenght);
}

static char	**ft_put_word(size_t count, char **result, char const *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (i < count)
	{
		while (*s == c)
			s++;
		result[i] = (char *)malloc(sizeof(char) * (ft_word_length(s, c) + 1));
		if (!result[i])
			return (NULL);
		j = 0;
		while (*s != '\0' && *s != c)
			result[i][j++] = *s++;
		result[i][j] = '\0';
		i++;
	}
	result[i] = 0;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	count;

	if (!s)
		return (0);
	count = ft_count_words(s, c);
	result = (char **)malloc(sizeof(char *) * (count + 1));
	if (!result)
		return (0);
	return (ft_put_word(count, result, s, c));
}

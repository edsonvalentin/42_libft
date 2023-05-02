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

// contar palavras || INCLUIR static antes de enviar
size_t	ft_count_worlds(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s != '\0' || *s != c)
			s++;
	}
	return (count);
}
// contar quantidade de palavras || INCLUIR static antes de enviar
size_t	ft_world_length(char const *, char c)
{
	site_t	lenght;
	
	lenght = 0;
	while (*s && *s != c)
	{
		lenght++;
		s++;
	}
	return (lenght);
}
// Guardar palavras na substrings || INCLUIR static antes de enviar
char	**ft_put_world(size_t count, char **result, char const *s, char c)
{
	size_t	i;
	size_t	j;

/* Modelo

	i = 0;
	while (i < count)
	{
		// Skip over any delimiter characters at the start of the word
		while (*s == c)
			s++;
		// Allocate memory for the current word
		result[i] = (char *)malloc(sizeof(char) * (ft_word_length(s, c) + 1));
		if (!result[i])
			return (NULL);
		// Copy the current word into the result array
		j = 0;
		while (*s && *s != c)
			result[i][j++] = *s++;
		result[i][j] = '\0';
		i++;
	}
	// Add a final NULL terminator to the end of the result array
	result[i] = NULL;
	return (result);
}*/
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	count;

	if(!s)
		return (0);
	count = ft_count_worlds(s, c);
	result = (char **)maloc(sizeof(char *) * (count + 1))
	if (!result)
		return (0);
	return (ft_put_world(result, s, c));
}
int main(void)
{
	char	*s = "The quick brown fox";
	char	**words = ft_split(s, ' ');

	int i = 0;
	while (words[i])
	{
		printf("%s\n", words[i]);
		free(words[i]);
		i++;
    }
	free(words);
	return (0);
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evalenti <evalenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 16:43:04 by evalenti          #+#    #+#             */
/*   Updated: 2023/04/22 16:39:53 by evalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
** Function name: 
** Librairy:
** Description: 
** Return value:
** External functs:
*/

#include <string.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;
	
	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	c;
	size_t	d;

	if (size <= ft_strlen(dst))
		return (size + ft_strlen(src));
	c = ft_strlen(dst);
	d = 0;
	while (src[d] != '\0' && c + 1 < size)
	{
		dst[c] = src[d];
		c++;
		d++;
	}
	dst[c] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[d]));

}

#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	*src;
	char	*dest;
	char	*ft_dest;

	src = "stuv";
	dest = "abcdefghijklmnopr";
	ft_dest = "abcdefghijklmnopr";
	printf("%s, %s, %zu", src, dest, ft_strlcat(dest, src, 4));
	//ft_strlcat(dest, ft_dest, src, 1);
	//ft_strlcat(dest, ft_dest, src, 4);
	//ft_strlcat(dest, ft_dest, src, 10);
	//src = "ghijkl";
	//ft_strlcat_test(dest, ft_dest, src, 8);
	//ft_strlcat_test(dest, ft_dest, src, 10);
	return (0);
}

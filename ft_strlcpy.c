/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evalenti <evalenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 16:42:41 by evalenti          #+#    #+#             */
/*   Updated: 2023/04/22 16:39:53 by evalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
** Function name: ft_strlcpy
** Library: string.h
** Description: copies up to size - 1 characters from the NUL-terminated string
**              src to dst, NUL-terminating the result.
** Return value: return the total length of the string they tried to create. That
**               means the length of src.
** External functs: none
*/

#include "Libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	count;
	size_t	index;
	
	count = 0;
	index = 0;
	while (src[count] != '\0')
		count++;
	if (size != 0)
	{
		while (src[index] != '\0' && index < (size - 1))
		{
			dst[index] = src[index];
			index++;
		}
		dst[index] = '\0';
	}
	return (count);
}

#include <stdio.h>
#include <stdlib.h>

int				main(void)
{
	int 	src_size;
	char 	*src;
	char 	*dest;

	src = calloc(11, sizeof(char));
	dest = calloc(8, sizeof(char));
	src = "alo galera";
	src_size = ft_strlcpy(dest, src, 8);
	printf("src: %s\n", src);
	printf("dest: %s\n", dest);
	printf("src_size: %d\n", src_size);
	return(0);
}

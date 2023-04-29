/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evalenti <evalenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 16:44:33 by evalenti          #+#    #+#             */
/*   Updated: 2023/04/22 16:39:53 by evalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
** Function name: ft_memchr
** Library: string.h
** Description: scans the initial n bytes of the memory area pointed to by s for **              the first instance of c. Both c and the bytes of the memory area **              pointed to by s are interpreted as unsigned char.
** Return value: a pointer to the matching byte or NULL if the character does not **               occur in the given memory area.
** External functs: none
*/

#include <stdio.h>
#include <string.h>
//#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	
	i = 0; 
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return((void *)s + i);
		i++;
	}
	return(0);
}

int	main(void)
{
	char data[] = {'q', 'r', 's', 't', 'p', 'a', 'x'};
	char *pos = ft_memchr(data, 'a', 7);
	
	if (pos == 0)
		printf("Char not found\n");
	else
	{
		printf("pos[0] = %c\n",pos[0]);
		printf("pos[1] = %c\n",pos[1]);
	}
	return(0);
}

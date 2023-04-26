/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evalenti <evalenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 16:41:32 by evalenti          #+#    #+#             */
/*   Updated: 2023/04/22 16:39:53 by evalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
** Function name: ft_bzero
** Library: string.h
** Description: The bzero() function erases the data in the n bytes of the memory
**              starting at the location pointed to by s, by writing zeros (bytes
**              containing '\0') to that area.
** Return value: none
** External functs: none
*/

#include <ctype.h>
#include <stddef.h>

//#include "libft.h"

void    ft_bzero(void *s, size_t n)
{
	size_t count;
	unsigned char *ptr;

	count = 0;
	ptr = (unsigned char*)s;
	while (count <= (n - 1))
	{
		ptr[count] = '\0';
		count++;
	}
	return s;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evalenti <evalenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 16:41:16 by evalenti          #+#    #+#             */
/*   Updated: 2023/04/22 16:39:53 by evalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
** Function name: ft_memset
** Library: string.h
** Description: fill the first n bytes of the memory area pointed to by str with
**              the constant byte c.
** Return value: the pointer to the memory area str.
** External functs: none
*/

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			count;
	unsigned char	*ptr;
	unsigned char	uc;

	count = 0;
	uc = (unsigned char)c;
	ptr = (unsigned char *)str;
	while (count < n)
	{
		ptr[count] = uc;
		count++;
	}
	return (str);
}

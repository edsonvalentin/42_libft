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

#include <ctype.h>
#include <stddef.h>
//#include "libft.h"

void *ft_memset(void *str, int c, size_t n)
{
	size_t count;
	unsigned char *ptr;
	
	count = 0;
	ptr = (unsigned char*)str;
	while (count <= (n - 1))
	{
		ptr[count] = c;
		count++;
	}
	return str;
}

#include <stdio.h>
#include <string.h>

int	main () {
	char str[50];

	strcpy(str,"This is string.h library function");
	puts(str);

	memset(str,'$',7);
	puts(str);

	ft_memset(str,'$',7);
	puts(str);

	return(0);
}

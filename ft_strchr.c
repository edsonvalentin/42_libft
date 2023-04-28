/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evalenti <evalenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 16:43:51 by evalenti          #+#    #+#             */
/*   Updated: 2023/04/22 16:39:53 by evalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
** Function name: ft_strchr
** Library: string.h
** Description: returns a pointer to the first occurrence of the character c in the string s.
** Return value: the pointer to the matched character or NULL if the character is **               not found.
** External functs: none
*/

#include <stdio.h>
#include <string.h>
//#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return((char *)s + i);
		i++;
	}
	return (0);
}

int main(void)
{
	char str[] = "abacate";
	char *o;
	char *p;
	
	o = strchr(str, 'c');
	p = ft_strchr(str, 'c');
	printf("Original %c\n", *o);
	printf("Prototipo %c\n", *p);
	return (0);
}

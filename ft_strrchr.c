/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evalenti <evalenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 16:44:04 by evalenti          #+#    #+#             */
/*   Updated: 2023/04/22 15:50:04 by evalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
** Function name: ft_strrchr
** Library: string.h
** Description: returns a pointer to the last occurrence of the character c in the **              string s.
** Return value: the pointer to the matched character or NULL if the character is **               not found.
** External functs: none
*/

#include <stdio.h>
#include <string.h>
//#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    int	i;
    
    i = 0;
    while (s[i] != '\0')
    	i++;
    while (i > 0)
    {
    	if (s[i] == c)
    		return ((char *)s + i);
    	i--;
    }
    return (0);
}

int main(void)
{
	char str[] = "abacate";
	char *o;
	char *p;
	
	o = strrchr(str, 'c');
	p = ft_strrchr(str, 'c');
	printf("Original %c\n", *o);
	printf("Original %c\n", *(o + 1));
	printf("Prototipo %c\n", *p);
	printf("Prototipo %c\n", *(p + 1));
	return (0);
}

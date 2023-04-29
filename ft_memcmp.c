/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evalenti <evalenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 16:44:49 by evalenti          #+#    #+#             */
/*   Updated: 2023/04/22 16:39:53 by evalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
** Function name: ft_memcmp
** Library: string.h
** Description: compares the first n bytes (each interpreted as unsigned char) of
**              the memory areas s1 and s2.
** Return value: returns an integer greater than, equal to, or less than zero if
**               the first n bytes of s1 is found, respectively, to be less than,
**               to match, or be greater than the first n bytes of s2.
** External functs: none
*/
#include <stdio.h>
#include <string.h>
//#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	    unsigned char	*str1;
	    unsigned char	*str2;
	    size_t	i;

	    str1 = (unsigned char *)s1;
	    str2 = (unsigned char *)s2;
	    i = 0;
	    if (n == 0)
	    	return(0);
	    while (str1[i] == str2[i] && n > i)
	    	i++;
	    return(str1[i] - str2[i]);
}

int	main(void)
{
	int num1[] = {1, 2, 3, 4};
	int num2[] = {1, 2, 6, 4};
	int res;
	
	res = ft_memcmp(num1, num2, sizeof(num1));
	if (res == 0)
		printf("They're equal. Result: %d\n", res);
	else
		printf("They're not equal. Result: %d\n", res);
	return(0);
}

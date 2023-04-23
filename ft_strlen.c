/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evalenti <evalenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 16:41:00 by evalenti          #+#    #+#             */
/*   Updated: 2023/04/22 16:39:53 by evalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
** Function name: ft_strlen
** Library: string.h
** Description: function calculates the length of the string s, excluding the
**              terminating null byte ('\0').
** Return value: the number of bytes in the string pointed to by s.
** External functs: none
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

#include <stdio.h>

int	main(void)
{
   char str[50];
   int len;

   strcpy(str, "This is tutorialspoint.com edson");

   len = ft_strlen(str);
   printf("Length of |%s| is |%d|\n", str, len);
   
   return(0);
}

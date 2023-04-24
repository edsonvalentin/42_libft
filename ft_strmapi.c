/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evalenti <evalenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 16:50:07 by evalenti          #+#    #+#             */
/*   Updated: 2023/04/22 15:51:10 by evalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
** Function name: ft_strmapi 
** Library: none
** Description: Applies the function ’f’ to each character of the string ’s’ and
**              passes its index as the first argument to create a new string a
**              new string (with malloc(3)) resulting from successive applications
**              of ’f’.
** Return value: The string created from the successive applications of ’f’. 
**               Returns NULL if the allocation fails.
** External functs: malloc
*/

#include "libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    
}
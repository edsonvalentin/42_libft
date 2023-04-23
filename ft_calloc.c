/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evalenti <evalenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 16:45:40 by evalenti          #+#    #+#             */
/*   Updated: 2023/04/22 16:39:53 by evalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
** Function name: ft_calloc
** Library: stdlib.h
** Description: allocates memory for an array of nmemb elements of size bytes
**              each and returns a pointer to the allocated memory. The memory
**              is set to zero. If nmemb or size is 0, then calloc() returns
**              either NULL, or a unique pointer value that can later be
**              successfully passed to free(). If the multiplication of nmemb
**              and size would result in integer overflow, then calloc() returns
**              an error.
** Return value: a pointer to the allocated memory, or NULL if the request fails.
** External functs: malloc
*/

void    *ft_calloc(size_t nmemb, size_t size)
{

}
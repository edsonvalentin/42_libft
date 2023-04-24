/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evalenti <evalenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 16:42:21 by evalenti          #+#    #+#             */
/*   Updated: 2023/04/22 16:39:53 by evalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
** Function name: ft_memmove
** Library: string.h
** Description: copies n bytes from memory area src to memory area dest. The
**              memory areas may overlap: copying takes place as though the bytes
**              in src are first copied into a temporary array that does not
**              overlap src or dest, and the bytes are then copied from the
**              temporary array to dest.
** Return value: the pointer to dest.
** External functs: none
*/

#include "libft.h"

void    *memmove(void *dest, const void *src, size_t n)
{

}
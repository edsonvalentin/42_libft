/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evalenti <evalenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 16:51:39 by evalenti          #+#    #+#             */
/*   Updated: 2023/04/22 16:52:09 by evalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
** Function name: ft_lstnew
** Library: bonus
** Description: Allocates (with malloc(3)) and returns a new node. The member
**              variable ’content’ is initialized with the value of the parameter
**              ’content’. The variable ’next’ is initialized to NULL.
** Return value: The new node.
** External functs: malloc
*/

#include "libft.h"

t_list  *ft_lstnew(void *content)
{
    t_list  *new;

    if (!(new = malloc(sizeof(t_list))))
        return (NULL);
    new->content = content;
    new->next = NULL;
    return (new);
}
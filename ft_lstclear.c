/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evalenti <evalenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 16:53:05 by evalenti          #+#    #+#             */
/*   Updated: 2023/04/22 16:52:09 by evalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
** Function name: ft_lstclear
** Library: bonus
** Description: Deletes and frees the given node and every successor of that
**              node, using the function ’del’ and free(3). Finally, the pointer
**              to the list must be set to NULL.
** Return value: none
** External functs: free
*/

#include "libft.h"

void    ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list  *tmp;

    if (lst && del)
    {
        while (*lst)
        {
            tmp = (*lst)->next;
            ft_lstdelone(*lst, del);
            *lst = tmp;
        }
        *lst = NULL;
    }
}
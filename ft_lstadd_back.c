/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evalenti <evalenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 16:52:48 by evalenti          #+#    #+#             */
/*   Updated: 2023/04/22 16:52:09 by evalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
** Function name: ft_lstadd_back
** Library: bonus
** Description: Add the node ’new’ at the end of the list.
** Return value: none
** External functs: none
*/

void    ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list  *tmp;

    if (lst && new)
    {
        if (!*lst)
            *lst = new;
        else
        {
            tmp = ft_lstlast(*lst);
            tmp->next = new;
        }
    }
}
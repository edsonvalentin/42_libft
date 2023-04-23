/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evalenti <evalenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 16:53:13 by evalenti          #+#    #+#             */
/*   Updated: 2023/04/22 16:52:09 by evalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
** Function name: ft_lstiter
** Library: bonus
** Description: Iterates the list ’lst’ and applies the function ’f’ to the
**              content of each element.
** Return value: none
** External functs: none
*/

void    ft_lstiter(t_list *lst, void (*f)(void *))
{
    if (lst && f)
    {
        while (lst)
        {
            f(lst->content);
            lst = lst->next;
        }
    }
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evalenti <evalenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 16:53:25 by evalenti          #+#    #+#             */
/*   Updated: 2023/04/22 16:52:09 by evalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
** Function name: ft_lstmap
** Library: bonus
** Description: Iterates the list ’lst’ and applies the function ’f’ to the
**              content of each node. Creates a new list resulting of the
**              successive applications of the function ’f’. The ’del’ function
**              is used to delete the content of a node if needed.
** Return value: The new list. NULL if the allocation fails.
** External functs: malloc
*/

t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list  *new;
    t_list  *tmp;

    if (!lst || !f)
        return (NULL);
    if (!(new = ft_lstnew(f(lst->content))))
        return (NULL);
    tmp = new;
    lst = lst->next;
    while (lst)
    {
        if (!(tmp->next = ft_lstnew(f(lst->content))))
        {
            ft_lstclear(&new, del);
            return (NULL);
        }
        tmp = tmp->next;
        lst = lst->next;
    }
    return (new);
}
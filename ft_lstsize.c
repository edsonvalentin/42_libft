/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evalenti <evalenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 16:52:28 by evalenti          #+#    #+#             */
/*   Updated: 2023/04/22 16:41:58 by evalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
** Function name: ft_lstsize
** Library: bonus
** Description: Counts the number of nodes in a list.
** Return value: The length of the list.
** External functs: none
*/

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*aux;
	int		i;

	if (!lst)
		return (0);
	aux = lst;
	i = 1;
	while (aux->next != NULL)
	{
		aux = aux->next;
		i++;
	}
	return (i);
}

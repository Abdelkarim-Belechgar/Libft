/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelechg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 01:05:51 by abelechg          #+#    #+#             */
/*   Updated: 2024/01/08 00:33:20 by abelechg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node;

	if (!lst || !del || !(*lst))
		return ;
	node = *lst;
	while (*lst)
	{
		node = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = node;
	}
}

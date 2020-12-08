/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 20:22:54 by mhori             #+#    #+#             */
/*   Updated: 2020/12/08 00:18:54 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_lst.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*save;
	t_list	*move;

	if (!(lst) || !(*lst))
		return ;
	move = *lst;
	while (move)
	{
		save = move;
		move = move->next;
		ft_lstdelone(save, del);
	}
	*lst = NULL;
}

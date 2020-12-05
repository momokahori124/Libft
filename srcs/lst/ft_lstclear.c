/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhori <mhori@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 20:22:54 by mhori             #+#    #+#             */
/*   Updated: 2020/12/06 02:56:28 by mhori            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"
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

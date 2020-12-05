/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhori <mhori@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 21:05:15 by mhori             #+#    #+#             */
/*   Updated: 2020/12/06 02:56:37 by mhori            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"
#include "../../includes/ft_lst.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*move;

	if (!lst)
		return ;
	move = lst;
	while (move)
	{
		(*f)(move->content);
		move = move->next;
	}
}

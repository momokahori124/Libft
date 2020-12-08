/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 19:02:08 by mhori             #+#    #+#             */
/*   Updated: 2020/12/08 00:18:57 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_lst.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list *tmp;

	if (!lst || !new)
		return ;
	tmp = *lst;
	*lst = new;
	new->next = tmp;
}

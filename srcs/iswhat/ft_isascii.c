/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhori <mhori@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 12:43:43 by mhori             #+#    #+#             */
/*   Updated: 2020/12/08 16:38:40 by mhori            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_iswhat.h"

int		ft_isascii(int c)
{
	if (0 <= c && c <= 127)
		return (1);
	return (0);
}

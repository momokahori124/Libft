/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhori <mhori@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 18:36:30 by mhori             #+#    #+#             */
/*   Updated: 2020/12/08 16:38:40 by mhori            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	*ft_memmove(void *b1, const void *b2, size_t n)
{
	unsigned char		*dest;
	unsigned const char	*src;

	if (!b1 && !b2)
		return (NULL);
	if (b2 > b1)
	{
		dest = b1;
		src = b2;
		while (n--)
			*(dest++) = *(src++);
	}
	else
	{
		dest = b1 + (n - 1);
		src = b2 + (n - 1);
		while (n--)
			*(dest--) = *(src--);
	}
	return (b1);
}

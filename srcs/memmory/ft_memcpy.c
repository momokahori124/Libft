/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 18:04:09 by mhori             #+#    #+#             */
/*   Updated: 2020/12/08 00:14:04 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	char		*t1;
	const char	*t2;

	t1 = s1;
	t2 = s2;
	if (!t1 && !t2)
		return (NULL);
	while (n--)
		*(t1++) = *(t2++);
	return (s1);
}

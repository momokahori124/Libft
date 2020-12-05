/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhori <mhori@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 18:04:09 by mhori             #+#    #+#             */
/*   Updated: 2020/12/06 02:57:27 by mhori            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"
#include "../../includes/ft_bzero.h"

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

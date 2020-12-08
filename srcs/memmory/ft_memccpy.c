/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 18:31:38 by mhori             #+#    #+#             */
/*   Updated: 2020/12/08 00:13:54 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	unsigned char		*t1;
	unsigned char		*t2;
	unsigned char		cc;

	t1 = (unsigned char *)s1;
	t2 = (unsigned char *)s2;
	cc = (unsigned char)c;
	if (!t1 && !t2)
		return (NULL);
	while (n--)
	{
		if (*t2 == cc)
		{
			*t1 = *t2;
			t1++;
			return (t1);
		}
		*(t1++) = *(t2++);
	}
	return (0);
}

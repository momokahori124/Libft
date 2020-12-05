/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhori <mhori@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 15:33:55 by mhori             #+#    #+#             */
/*   Updated: 2020/12/06 02:58:40 by mhori            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"
#include "../../includes/ft_string.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t l)
{
	size_t		len2;
	size_t		i;
	size_t		len;
	size_t		z;

	len2 = ft_strlen(s2);
	if (len2 == 0)
		return ((char *)s1);
	len = l;
	z = 0;
	i = 0;
	while (s1[i] && i < len)
	{
		while (s2[z] == s1[i + z] && i + z < len)
		{
			if (z == len2 - 1)
				return ((char *)(s1 + i));
			z++;
		}
		z = 0;
		i++;
	}
	return (NULL);
}

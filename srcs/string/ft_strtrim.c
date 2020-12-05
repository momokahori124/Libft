/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhori <mhori@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/29 20:15:00 by mhori             #+#    #+#             */
/*   Updated: 2020/12/06 02:58:49 by mhori            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"
#include "../../includes/ft_string.h"

int				isset(char c, char const *s)
{
	size_t		len;
	size_t		i;

	i = 0;
	len = ft_strlen(s);
	while (i < len)
	{
		if (c == s[i])
			return (1);
		i++;
	}
	return (0);
}

static	int		ft_count(char const *s1, char const *set)
{
	int			count;
	size_t		i;

	count = 0;
	i = 0;
	while (isset(s1[i], set) && s1[i])
		i++;
	if (ft_strlen(s1) == i)
		return (0);
	while (s1[count + i])
		count++;
	count--;
	while (isset(s1[i + count], set))
		count--;
	count++;
	return (count);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*ret;
	int		len;

	if (!s1 || !set)
		return (NULL);
	len = ft_count(s1, set);
	if (!(ret = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	i = 0;
	j = 0;
	while (isset(s1[i], set))
		i++;
	while (j < len)
	{
		ret[j] = s1[i + j];
		j++;
	}
	ret[j] = '\0';
	return (ret);
}

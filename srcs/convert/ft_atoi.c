/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhori <mhori@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 13:23:16 by mhori             #+#    #+#             */
/*   Updated: 2020/12/08 16:38:40 by mhori            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_convert.h"

int		ft_isspace(char c)
{
	if (c == '\n' || c == '\t' || c == '\v')
		return (1);
	if (c == '\f' || c == '\r' || c == ' ')
		return (1);
	return (0);
}

int		ft_atoi(const char *str)
{
	long long	ret;
	long long	sign;

	ret = 0;
	sign = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while ('0' <= *str && *str <= '9')
	{
		ret = ret * 10 + (*str - '0');
		str++;
	}
	ret *= sign;
	ret = (int)ret;
	return (ret);
}

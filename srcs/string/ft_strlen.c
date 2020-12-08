/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 13:07:20 by mhori             #+#    #+#             */
/*   Updated: 2020/12/08 00:17:57 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_string.h"

size_t	ft_strlen(const char *s)
{
	size_t count;

	count = 0;
	while (*(s++))
		count++;
	return (count);
}

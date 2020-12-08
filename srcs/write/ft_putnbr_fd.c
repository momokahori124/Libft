/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjinichi <tjinichi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/29 17:13:29 by mhori             #+#    #+#             */
/*   Updated: 2020/12/08 00:16:34 by tjinichi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_write.h"

void	ft_putnbr_fd(int n, int fd)
{
	long save;
	long d;

	save = (long)n;
	d = 1;
	if (save < 0)
	{
		ft_putchar_fd('-', fd);
		save *= -1;
	}
	while (save >= 10 * d)
		d *= 10;
	while (d)
	{
		ft_putchar_fd((save / d) + '0', fd);
		save %= d;
		d /= 10;
	}
}

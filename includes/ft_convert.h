/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhori <mhori@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 00:52:06 by mhori             #+#    #+#             */
/*   Updated: 2020/12/06 01:12:36 by mhori            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CONVERT_H
# define FT_CONVERT_H

# include "libft.h"

int		ft_isspace(char c);
int		ft_atoi(const char *str);
char			*ft_itoa(int n);
int			ft_tolower(int c);
int		ft_toupper(int c);

#endif

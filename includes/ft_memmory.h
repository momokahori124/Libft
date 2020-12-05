/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmory.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhori <mhori@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 01:02:00 by mhori             #+#    #+#             */
/*   Updated: 2020/12/06 01:12:29 by mhori            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MEMMORY_H
# define FT_MEMMORY_H

# include "libft.h"

void	ft_bzero(void *b, size_t n);
void	*ft_calloc(size_t count, size_t size);
void	*ft_memccpy(void *s1, const void *s2, int c, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *b1, const void *b2, size_t n);
void	*ft_memcpy(void *s1, const void *s2, size_t n);
void	*ft_memmove(void *b1, const void *b2, size_t n);
void	*ft_memset(void *b, int c, size_t len);

#endif

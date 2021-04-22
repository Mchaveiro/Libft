/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchaveir <mchaveir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 12:31:27 by mchaveir          #+#    #+#             */
/*   Updated: 2021/04/16 22:52:41 by mchaveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			a;
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char *)dst;
	s2 = (unsigned char *)src;
	if (!n || dst == src)
		return (dst);
	a = -1;
	while (++a < n)
		s1[a] = s2[a];
	return (dst);
}
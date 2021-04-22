/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchaveir <mchaveir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 12:40:16 by mchaveir          #+#    #+#             */
/*   Updated: 2021/04/16 22:52:35 by mchaveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			a;
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char *)dst;
	s2 = (unsigned char *)src;
	a = 0;
	if (dst == src)
		return (dst);
	while (a < n)
	{
		s1[a] = s2[a];
		if (s1[a] == (unsigned char)c)
			return ((void *)dst + a + 1);
		a++;
	}
	return (NULL);
}
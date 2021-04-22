/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchaveir <mchaveir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 13:05:54 by mchaveir          #+#    #+#             */
/*   Updated: 2021/04/16 22:52:39 by mchaveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t			a;
	unsigned char	*s1;
	unsigned char	*s2;

	if (!n)
		return (0);
	s1 = (unsigned char *)str1;
	s2 = (unsigned char *)str2;
	a = 0;
	while (a < n)
	{
		if (s1[a] != s2[a])
			return (s1[a] - s2[a]);
		a++;
	}
	return (0);
}
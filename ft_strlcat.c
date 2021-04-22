/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchaveir <mchaveir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 11:25:57 by mchaveir          #+#    #+#             */
/*   Updated: 2021/04/16 22:52:50 by mchaveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	a;
	size_t	b;
	size_t	c;

	c = 0;
	a = ft_strlen(dst);
	b = ft_strlen(src);
	if (size < a + 1)
		return (size + b);
	if (size > a + 1)
	{
		while (src[c] != '\0' && a + 1 + c < size)
		{
			dst[a + c] = src[c];
			c++;
		}
	}
	dst[a + c] = '\0';
	return (a + b);
}
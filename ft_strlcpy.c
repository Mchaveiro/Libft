/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchaveir <mchaveir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 17:09:54 by mchaveir          #+#    #+#             */
/*   Updated: 2021/04/16 22:52:52 by mchaveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	a;

	a = 0;
	if (!src)
		return (0);
	if (size <= 0)
		return (ft_strlen((char *)src));
	while (src[a] != '\0' && a < size - 1)
	{
		dst[a] = src[a];
		a++;
	}
	dst[a] = '\0';
	return (ft_strlen((char *)src));
}
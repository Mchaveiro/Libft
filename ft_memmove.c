/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchaveir <mchaveir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 12:25:48 by mchaveir          #+#    #+#             */
/*   Updated: 2021/04/16 22:52:43 by mchaveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	unsigned char		*s1;
	unsigned char		*s2;

	if (str1 == str2 || n == 0)
		return (str1);
	if (str1 < str2)
	{
		s1 = (unsigned char *)str1;
		s2 = (unsigned char *)str2;
		while (n--)
			*s1++ = *s2++;
	}
	else
	{
		s1 = (unsigned char *)str1 + (n - 1);
		s2 = (unsigned char *)str2 + (n - 1);
		while (n--)
			*s1-- = *s2--;
	}
	return (str1);
}
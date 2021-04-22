/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchaveir <mchaveir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 11:04:58 by mchaveir          #+#    #+#             */
/*   Updated: 2021/04/16 22:53:02 by mchaveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int a;

	a = ft_strlen(s);
	while (a >= 0)
	{
		if (s[a] == (unsigned char)c)
			return ((char *)&s[a]);
		a--;
	}
	return (NULL);
}
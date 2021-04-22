/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchaveir <mchaveir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 16:53:39 by mchaveir          #+#    #+#             */
/*   Updated: 2021/04/16 22:53:04 by mchaveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char        *ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	a;

	if (!s)
		return (NULL);
	a = ft_strlen(s);
	if ((unsigned int)a < start)
		return (ft_strdup(""));
	if (a < len)
		len = a;
	if (!(str = malloc(len + 1)))
		return (NULL);
	ft_strlcpy(str, s + start, len + 1);
	return (str);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchaveir <mchaveir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 23:09:37 by mchaveir          #+#    #+#             */
/*   Updated: 2021/04/16 22:52:47 by mchaveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_contar(char const *s, char c)
{
	unsigned int	i;
	int				count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			count++;
		while (s[i] && (s[i] != c))
			i++;
	}
	return (count);
}

char		**ft_split(char const *s, char c)
{
	size_t			nbwords;
	char			*ptr;
	char			**splitted;

	if (!s)
		return (0);
	nbwords = ft_contar((char *)s, c);
	if (!(splitted = (char **)malloc(sizeof(char *) * (nbwords + 1))))
		return (0);
	ptr = (char *)s;
	while (*s)
	{
		if (*s == c)
		{
			if (ptr != s)
				*(splitted++) = ft_substr(ptr, 0, s - ptr);
			ptr = (char *)s + 1;
		}
		s++;
	}
	if (ptr != s)
		*(splitted++) = ft_substr(ptr, 0, s - ptr);
	*splitted = 0;
	return (splitted - nbwords);
}
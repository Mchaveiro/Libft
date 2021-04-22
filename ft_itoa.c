/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchaveir <mchaveir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 23:22:30 by mchaveir          #+#    #+#             */
/*   Updated: 2021/04/16 22:52:31 by mchaveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <unistd.h>

char			*ft_itoa(int n)
{
	char	*str;
	long	nbr;
	size_t	size;

	nbr = n;
	size = n > 0 ? 0 : 1;
	nbr = nbr > 0 ? nbr : -nbr;
	while (n)
	{
		n /= 10;
		size++;
	}
	if (!(str = (char *)malloc(size + 1)))
		return (0);
	*(str + size--) = '\0';
	while (nbr > 0)
	{
		*(str + size--) = nbr % 10 + '0';
		nbr /= 10;
	}
	if (size == 0 && str[1] == '\0')
		*(str + size) = '0';
	else if (size == 0 && str[1] != '\0')
		*(str + size) = '-';
	return (str);
}
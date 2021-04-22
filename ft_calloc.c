/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchaveir <mchaveir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 11:43:06 by mchaveir          #+#    #+#             */
/*   Updated: 2021/04/16 22:52:16 by mchaveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t items, size_t size)
{
	void *ptr;

	ptr = malloc(items * size);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, (items * size));
	return (ptr);
}
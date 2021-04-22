/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchaveir <mchaveir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 11:12:55 by mchaveir          #+#    #+#             */
/*   Updated: 2021/04/17 11:34:45 by mchaveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*cur;

	if (lst)
	{
		while (*lst)
		{
			cur = (*lst)->next;
			ft_lstdelone(*lst, del);
			(*lst) = cur;
		}
	}
}
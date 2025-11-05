/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasaidi <sasaidi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 04:42:49 by sasaidi           #+#    #+#             */
/*   Updated: 2025/11/05 15:40:12 by sasaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*start;

	if (!lst)
		return ;
	while (*lst)
	{
		start = (*lst)->next;
		if (del)
			del((*lst)->content);
		free(*lst);
		*lst = start;
	}
}

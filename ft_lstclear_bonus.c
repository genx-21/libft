/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasaidi <sasaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 04:42:49 by sasaidi           #+#    #+#             */
/*   Updated: 2025/11/04 23:02:04 by sasaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
    if (!lst)
        return ;
    t_list *start;

    while (*lst)
    {
        start = (*lst)->next;
        if (del)
            del((*lst)->data);
        free (*lst);
        *lst = start;
    }
}
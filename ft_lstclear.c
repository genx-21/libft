/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasaidi <sasaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 04:42:49 by sasaidi           #+#    #+#             */
/*   Updated: 2025/11/05 10:45:50 by sasaidi          ###   ########.fr       */
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
            del((*lst)->content);
        free (*lst);
        *lst = start;
    }
}

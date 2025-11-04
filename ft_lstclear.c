/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasaidi <sasaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 04:42:49 by sasaidi           #+#    #+#             */
/*   Updated: 2025/11/01 05:10:00 by sasaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void del(void *data)
{
    free(data);
}

void ft_lstclear(t_list **lst, void (*del)(void *))
{
    if (!lst)
        return ;
    t_list *start;

    while (*lst)
    {
        start = (*lst)->next;
        del((*lst)->data);
        free (*lst);
        *lst = start;
    }
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasaidi <sasaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 02:20:10 by sasaidi           #+#    #+#             */
/*   Updated: 2025/11/04 23:02:37 by sasaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *new;
    new = malloc(sizeof(t_list));
    if (new == NULL)
        return (NULL);
    new->data = content;
    new->next = NULL;
    return (new);
}

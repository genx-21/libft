/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasaidi <sasaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 23:32:39 by sasaidi           #+#    #+#             */
/*   Updated: 2025/11/04 15:13:24 by sasaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *new_lst;
    t_list *new_node;
    void *n_content;
    new_lst = NULL;
    while (lst)
    {
        n_content = f(lst->data);
        if (!n_content)
        {
            ft_lstclear(&new_lst, del);
            return (NULL);
        }
        new_node = ft_lstnew(n_content);
        if (!new_node)
        {
            del(n_content);
            ft_lstclear(&new_lst, del);
            return (NULL);
        }
        ft_lstadd_back(&new_lst, new_node);
        lst = lst->next;
    }
    return (new_lst);
}
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Example function: convert string to uppercase (creates new allocated string)
void *to_upper(void *str)
{
    char *src = (char *)str;
    char *res = strdup(src);
    if (!res)
        return NULL;
    for (int i = 0; res[i]; i++)
    {
        if (res[i] >= 'a' && res[i] <= 'z')
            res[i] -= 32;
    }
    return res;
}

// Example del function to free content
void del(void *content)
{
    free(content);
}

// Helper function to print the list
void print_list(t_list *lst)
{
    while (lst)
    {
        printf("%s", (char *)lst->data);
        lst = lst->next;
    }
    printf("NULL\n");
}

int main(void)
{
    // Step 1: Create a list of strings
    t_list *head = ft_lstnew(strdup("hello"));
    t_list *node2 = ft_lstnew(strdup("world"));
    t_list *node3 = ft_lstnew(strdup("libft"));
    ft_lstadd_back(&head, node2);
    ft_lstadd_back(&head, node3);

    printf("Original list:\n");
    print_list(head);

    // Step 2: Apply ft_lstmap with to_upper function
    t_list *new_list = ft_lstmap(head, to_upper, del);

    printf("\nMapped list (to_upper):\n");
    print_list(new_list);

    // Step 3: Free both lists
    ft_lstclear(&head, del);
    ft_lstclear(&new_list, del);

    return 0;
}
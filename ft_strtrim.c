/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasaidi <sasaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 17:32:52 by sasaidi           #+#    #+#             */
/*   Updated: 2025/10/24 09:56:48 by sasaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int check(char c,const char *set)
{
    int i;

    i = 0;
    while (set[i])
    {
        if (set[i] == c)
            return (1);
        i++;
    }
    return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
    unsigned int start;
    size_t len_s;
    
    if (!s1 || !set)
        return (NULL);
    start = 0;
    while (s1[start] && check(s1[start], set))
        start++;
    len_s = ft_strlen(s1) - 1;
    while (len_s > 0 && check(s1[len_s], set))
        len_s--;
    return (ft_substr(s1, start, (len_s - start + 1)));
}

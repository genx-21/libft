/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasaidi <sasaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 21:49:33 by sasaidi           #+#    #+#             */
/*   Updated: 2025/10/25 22:45:29 by sasaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    size_t len_s;
    unsigned int i;
    char *arr;
    
    i = 0;
    if (!s || !f)
        return (NULL);
    len_s = ft_strlen(s);
    printf("%d\n", len_s);
    arr = malloc(sizeof(char) * (len_s + 1));
    if (!arr)
        return (NULL);
    while (s[i])
    {
        arr[i] = (*f)(i, s[i]);
        i++;
    }
    arr[i] = '\0';
    return (arr);
}

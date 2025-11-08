/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasaidi <sasaidi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 17:32:52 by sasaidi           #+#    #+#             */
/*   Updated: 2025/11/08 12:41:40 by sasaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	start;
	size_t			end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && check(s1[start], set))
		start++;
	end = ft_strlen(s1) - 1;
	while (end > 0 && check(s1[end], set))
		end--;
	return (ft_substr(s1, start, (end - start + 1)));
}

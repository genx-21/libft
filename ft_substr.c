/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasaidi <sasaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 21:20:29 by sasaidi           #+#    #+#             */
/*   Updated: 2025/10/31 00:46:50 by sasaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*cpyx(char *dest, const char *src, size_t start, size_t end)
{
	size_t	i;

	i = 0;
	while (i < end && src[i + start])
	{
		dest[i] = src[start + i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	len_s;
	char	*arr;

	len_s = ft_strlen(s);
	if ((len_s == 0) || (start >= len_s))
		return (ft_strdup(""));
	arr = malloc(sizeof(char) * (len + 1));
	if (!arr)
		return (NULL);
	cpyx(arr, s, start, len);
	return (arr);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasaidi <sasaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 17:31:34 by sasaidi           #+#    #+#             */
/*   Updated: 2025/10/30 23:54:42 by sasaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big_s, const char *found_s, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*found_s == '\0')
		return ((char *)big_s);
	while (big_s[i] && i < len)
	{
		j = 0;
		while (big_s[i + j] == found_s[j] && found_s[j] && (i + j) < len)
			j++;
		if (!found_s[j])
			return ((char *)&big_s[i]);
		i++;
	}
	return (NULL);
}

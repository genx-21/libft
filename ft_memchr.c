/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasaidi <sasaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 01:32:39 by sasaidi           #+#    #+#             */
/*   Updated: 2025/10/20 16:08:12 by sasaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			j;
	unsigned char	*str;

	j = 0;
	str = (unsigned char *)s;
	while (j < n)
	{
		if (str[j] == (unsigned char)c)
			return ((char *)s + j);
		j++;
	}
	return (NULL);
}

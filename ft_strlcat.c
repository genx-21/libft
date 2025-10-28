/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasaidi <sasaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 14:34:26 by sasaidi           #+#    #+#             */
/*   Updated: 2025/10/20 15:29:57 by sasaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dst_l;
	size_t	src_l;

	dst_l = ft_strlen(dst);
	src_l = ft_strlen(src);
	i = 0;
	j = 0;
	while (dst[j])
		j++;
	if (size <= dst_l)
		return (src_l + size);
	while (i + j < size - 1 && src[i])
	{
		dst[i + j] = src[i];
		i++;
	}
	dst[i + j] = '\0';
	return (dst_l + src_l);
}

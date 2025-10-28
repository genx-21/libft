/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasaidi <sasaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 12:25:15 by sasaidi           #+#    #+#             */
/*   Updated: 2025/10/26 16:15:40 by sasaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*dd;
	const unsigned char	*ss;
	size_t				j;

	if (!dest || !src)
		return (NULL);
	dd = (unsigned char *)dest;
	ss = (const unsigned char *)src;
	j = 0;
	while (j < n)
	{
		dd[j] = ss[j];
		j++;
	}
	return (dest);
}

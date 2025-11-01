/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasaidi <sasaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 10:26:35 by sasaidi           #+#    #+#             */
/*   Updated: 2025/10/29 22:59:45 by sasaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*ddest;
	const unsigned char	*ssrc;
	size_t				j;

	j = 0;
	ddest = (unsigned char *)dest;
	ssrc = (unsigned char *)src;
	if (ddest < ssrc)
	{
		while (j < n)
		{
			ddest[j] = ssrc[j];
			j++;
		}
	}
	else if (ddest > ssrc)
	{
		while (n > 0)
		{
			n--;
			ddest[n] = ssrc[n];
		}
	}
	return (dest);
}

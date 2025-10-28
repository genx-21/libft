/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasaidi <sasaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 16:11:08 by sasaidi           #+#    #+#             */
/*   Updated: 2025/10/20 17:26:12 by sasaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ss1;
	unsigned char   *ss2;
	size_t          j;

	j = 0;
	ss1 = (unsigned char *)s1;
	ss2 = (unsigned char *)s2;
	while (j < n)
	{
		if (ss1[j] != ss2[j])
			return (ss1[j] - ss2[j]);
		j++;
	}
	return (0);
}

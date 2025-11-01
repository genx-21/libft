/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasaidi <sasaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 23:07:30 by sasaidi           #+#    #+#             */
/*   Updated: 2025/10/31 00:25:08 by sasaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t narr, size_t size)
{
	size_t	totalz;
	void	*array;

	if (!narr || !size)
		return (malloc(0));
	totalz = (narr * size);
	if (totalz / narr != size)
		return (NULL);
	array = malloc(totalz);
	if (array == NULL)
		return (NULL);
	ft_bzero(array, totalz);
	return (array);
}

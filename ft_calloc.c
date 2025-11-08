/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasaidi <sasaidi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 23:07:30 by sasaidi           #+#    #+#             */
/*   Updated: 2025/11/08 12:09:25 by sasaidi          ###   ########.fr       */
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
	if ((narr != 0) && totalz / narr != size)
		return (NULL);
	array = malloc(totalz);
	if (array == NULL)
		return (NULL);
	ft_bzero(array, totalz);
	return (array);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasaidi <sasaidi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 17:42:16 by sasaidi           #+#    #+#             */
/*   Updated: 2025/11/08 13:06:02 by sasaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countnb(int n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		n *= -1;
		len++;
	}
	while (n > 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

static void	nbset(char *number, int n, int len)
{
	int	end;

	end = len;
	len--;
	while (n > 0)
	{
		number[len] = (n % 10) + 48;
		n = n / 10;
		len--;
	}
	number[end] = '\0';
}

char	*ft_itoa(int n)
{
	char	*number;
	int		len;
	int		i;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	len = countnb(n);
	number = malloc(sizeof(char) * (len + 1));
	if (!number)
		return (NULL);
	i = 0;
	if (n < 0)
	{
		number[i] = '-';
		n *= -1;
	}
	nbset(number, n, len);
	return (number);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasaidi <sasaidi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 18:47:00 by sasaidi           #+#    #+#             */
/*   Updated: 2025/11/05 15:55:09 by sasaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	negativ(int fd, int n)
{
	if (n == 0)
	{
		ft_putchar_fd('0', fd);
		return (-1);
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n *= -1;
	}
	return (n);
}

void	ft_putnbr_fd(int n, int fd)
{
	char	arr[11];
	int		i;

	i = 0;
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (n <= 0)
		n = negativ(fd, n);
	if (n == -1)
		return ;
	while (n > 0)
	{
		arr[i] = (n % 10) + 48;
		n = n / 10;
		i++;
	}
	while (i > 0)
	{
		i--;
		ft_putchar_fd(arr[i], fd);
	}
}

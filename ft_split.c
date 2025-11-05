/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasaidi <sasaidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 10:41:49 by sasaidi           #+#    #+#             */
/*   Updated: 2025/11/05 00:25:16 by sasaidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*datacpy(const char *s, int start, int end)
{
	int		i;
	char	*arr;

	i = 0;
	arr = malloc(sizeof(char) * (end - start + 2));
	if (!arr)
		return (NULL);
	while (start <= end && s[start])
	{
		arr[i] = s[start];
		i++;
		start++;
	}
	arr[i] = '\0';
	return (arr);
}

void	free_data(char ***arr)
{
	int	i;

	i = 0;
	if (!(*arr))
		return ;
	while ((*arr)[i])
	{
		free((*arr)[i]);
		i++;
	}
	free(*arr);
}

static char	**check_w_and_tocopy(const char *s, char c, int *row, char **arr)
{
	int	i;
	int	start;
	int	end;

	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		end = i - 1;
		if (end >= start)
		{
			arr[*row] = datacpy(s, start, end);
			if (!arr[*row])
			{
				free_data(&arr);
				return (NULL);
			}
			(*row)++;
		}
	}
	return (arr);
}

static int	countw(const char *s, char c)
{
	int	i;
	int	cw;

	cw = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			cw++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (cw);
}

char	**ft_split(char const *s, char c)
{
	int		row;
	char	**arr;

	if (!s)
		return (NULL);
	arr = malloc(sizeof(char *) * (countw(s, c) + 1));
	if (!arr)
		return (NULL);
	row = 0;
	if (!check_w_and_tocopy(s, c, &row, arr))
		return (NULL);
	arr[row] = NULL;
	return (arr);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llanga <llanga@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 11:07:26 by msambo            #+#    #+#             */
/*   Updated: 2018/06/14 16:44:40 by msambo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_len(long n)
{
	int			i;

	i = 0;
	if (n == 0)
		i++;
	if (n < 0)
	{
		n = n * -1;
		i++;
		while (n > 0)
		{
			n = n / 10;
			i++;
		}
	}
	else if (n > 0)
	{
		while (n > 0)
		{
			n = n / 10;
			i++;
		}
	}
	return (i);
}

char			*ft_itoa(int n)
{
	char		*res;
	int			n_len;
	int			hold;
	long		l;

	l = (long)n;
	hold = 0;
	res = NULL;
	n_len = get_len(l);
	if (!(res = (char *)malloc(sizeof(char) * (n_len + 1))))
		return (NULL);
	res[n_len--] = '\0';
	if (l < 0)
	{
		hold = 1;
		res[0] = '-';
		l *= -1;
	}
	while (n_len >= hold)
	{
		res[n_len--] = (l % 10) + '0';
		l /= 10;
	}
	return (res);
}

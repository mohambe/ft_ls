/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msambo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 14:28:41 by msambo            #+#    #+#             */
/*   Updated: 2018/09/17 15:32:49 by msambo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		nbr_length(int n)
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

void	size(int n)
{
	int len;

	len = nbr_length(n);
	if (len == 1)
	{
		ft_putstr("    ");
	}
	else if (len == 3)
		ft_putstr("  ");
	else if (len == 2)
	{
		ft_putstr("   ");
	}
	else if (len == 4)
	{
		ft_putstr(" ");
	}
	return ;
}

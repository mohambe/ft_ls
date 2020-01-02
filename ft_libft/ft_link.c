/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_link.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msambo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 14:27:19 by msambo            #+#    #+#             */
/*   Updated: 2018/09/17 14:28:00 by msambo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	link_ls(int n)
{
	int len;

	len = nbr_length(n);
	if (len == 1)
	{
		ft_putstr("  ");
	}
	else if (len == 2)
	{
		write(1, " ", 1);
	}
	return ;
}
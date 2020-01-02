/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msambo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 18:13:13 by msambo            #+#    #+#             */
/*   Updated: 2018/05/31 16:15:31 by msambo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*s1;
	char	*d1;
	size_t	i;

	i = 0;
	s1 = (char *)src;
	d1 = (char *)dst;
	if (d1 > s1)
		while (len)
		{
			d1[len - 1] = s1[len - 1];
			--len;
		}
	else
		while (i < len)
		{
			d1[i] = s1[i];
			i++;
		}
	return (dst);
}

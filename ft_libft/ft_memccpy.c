/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msambo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 15:48:06 by msambo            #+#    #+#             */
/*   Updated: 2018/06/07 12:21:19 by msambo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*s1;
	unsigned char	*d1;

	s1 = (unsigned char *)src;
	d1 = (unsigned char *)dst;
	i = 0;
	while (n > i)
	{
		d1[i] = s1[i];
		if (s1[i] == (unsigned char)c)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}

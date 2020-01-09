/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msambo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 17:40:41 by msambo            #+#    #+#             */
/*   Updated: 2018/06/07 12:20:58 by msambo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*src1;
	char	*dst1;

	src1 = (char*)src;
	dst1 = (char *)dst;
	i = 0;
	while (i < n)
	{
		dst1[i] = src1[i];
		if (src1[i] == '\0')
		{
			dst1[i] = '\0';
			break ;
		}
		i++;
	}
	return (dst);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msambo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/27 11:07:51 by msambo            #+#    #+#             */
/*   Updated: 2018/05/31 15:12:27 by msambo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;
	size_t srclen;
	size_t dstlen;

	i = 0;
	j = 0;
	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (size <= dstlen)
		return (size + srclen);
	while (dst[i] != '\0' && i < (size - 1))
	{
		i++;
	}
	while (src[j] && i < (size - 1))
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dstlen + srclen);
}

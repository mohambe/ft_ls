/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msambo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 17:47:47 by msambo            #+#    #+#             */
/*   Updated: 2018/05/31 15:17:04 by msambo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	while (n > i || (s1[i] == s2[i]))
	{
		if (s1[i] > s2[i] || (s1[i] < s2[i]))
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		if (s1[i] == '\0' || (s2[i] == '\0') || i == n)
			break ;
		i++;
	}
	return (0);
}

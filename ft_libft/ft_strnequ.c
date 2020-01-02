/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msambo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 12:13:50 by msambo            #+#    #+#             */
/*   Updated: 2018/06/05 15:29:11 by msambo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_strnequ(char const *s1, char const *s2, size_t n)
{
	char	*str1;
	char	*str2;

	if (s1 && s2)
	{
		str1 = (char*)s1;
		str2 = (char *)s2;
		if (ft_strncmp(str1, str2, n) == 0)
			return (1);
	}
	return (0);
}

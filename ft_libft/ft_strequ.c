/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msambo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 13:23:07 by msambo            #+#    #+#             */
/*   Updated: 2018/06/05 15:27:55 by msambo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	char *str1;
	char *str2;

	if (s1 && s2)
	{
		str1 = (char*)s1;
		str2 = (char*)s2;
		if (ft_strcmp(str1, str2) == 0)
			return (1);
	}
	return (0);
}

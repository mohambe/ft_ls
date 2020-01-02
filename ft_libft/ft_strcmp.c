/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msambo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/26 10:43:38 by msambo            #+#    #+#             */
/*   Updated: 2018/06/06 17:14:04 by msambo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int					i;
	unsigned char		*str1;
	unsigned char		*str2;

	str1 = (unsigned char*)s1;
	str2 = (unsigned char*)s2;
	i = 0;
	while ((str1[i] != '\0') && (str2[i] != '\0') && (str1[i] == str2[i]))
	{
		i++;
	}
	return (str1[i] - str2[i]);
}

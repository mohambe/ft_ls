/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msambo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 11:16:51 by msambo            #+#    #+#             */
/*   Updated: 2018/06/14 14:24:04 by msambo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strstr(const char *str, const char *needle)
{
	char	*str1;
	int		i;
	int		j;

	i = 0;
	str1 = (char *)str;
	if (needle[i] == 0)
		return (str1);
	else
		while (str1[i] != '\0')
		{
			j = 0;
			while (needle[j] == str1[i + j])
			{
				if (needle[j + 1] == '\0')
				{
					return (str1 + i);
				}
				j++;
			}
			i++;
		}
	return (0);
}

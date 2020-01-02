/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msambo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 14:58:29 by msambo            #+#    #+#             */
/*   Updated: 2018/06/13 17:12:22 by msambo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *needle, size_t len)
{
	size_t	j;
	size_t	i;
	char	*str1;

	str1 = (char*)str;
	i = 0;
	if (needle[i] == 0)
		return (str1);
	while (i <= len && str[i] != '\0')
	{
		j = 0;
		while (needle[j] == str[i + j] && str[i + j] && (i + j) < len)
		{
			if (needle[j + 1] == '\0')
			{
				return (str1 + i);
			}
			if (i + j > len)
				return (NULL);
			j++;
		}
		i++;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msambo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/02 15:48:09 by msambo            #+#    #+#             */
/*   Updated: 2018/09/13 08:49:48 by msambo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	whitespace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	else
		return (0);
}

char		*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	if (s)
	{
		len = ft_strlen(s);
		while (whitespace(s[i]))
			i++;
		while (whitespace(s[len - 1]))
			len--;
		if (len == 0)
			return (ft_strdup(""));
	}
	return (ft_strsub((char*)s, i, (len - i)));
}

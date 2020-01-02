/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msambo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 12:06:03 by msambo            #+#    #+#             */
/*   Updated: 2018/05/31 16:16:34 by msambo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*new_s;
	int		i;

	if (s != NULL)
	{
		new_s = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
		if (new_s == NULL)
			return (NULL);
		i = 0;
		while (s[i] != '\0')
		{
			new_s[i] = f((char)s[i]);
			i++;
		}
		new_s[i] = '\0';
		return (new_s);
	}
	return (NULL);
}

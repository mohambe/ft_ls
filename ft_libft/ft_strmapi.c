/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msambo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 15:48:22 by msambo            #+#    #+#             */
/*   Updated: 2018/05/31 16:16:50 by msambo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned	i;
	char		*new_s;

	if (s != NULL)
	{
		new_s = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1));
		if (new_s == NULL)
			return (NULL);
		i = 0;
		while (s[i] != '\0')
		{
			new_s[i] = f(i, (char)s[i]);
			i++;
		}
		new_s[i] = '\0';
		return (new_s);
	}
	return (NULL);
}

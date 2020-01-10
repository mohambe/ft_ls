/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msambo <msambo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 12:42:03 by msambo            #+#    #+#             */
/*   Updated: 2020/01/10 12:42:42 by msambo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

char	**ft_reversing(char **str, char **new)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_strdel(&new[i]);
		new[i] = ft_strdup(str[i]);
		i++;
	}
	return (new);
}

char	**ft_reverse(char **new)
{
	char	**str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	j = Acounter(new) - 1;
	str = (char **)malloc(sizeof(char *) * (j + 2));
	while (j >= 0)
		str[i++] = ft_strdup(new[j--]);
	str[i] = NULL;
	new = ft_reversing(str, new);
	word_destory(str);
	return (new);
}

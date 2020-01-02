/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msambo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 13:31:57 by msambo            #+#    #+#             */
/*   Updated: 2018/09/13 13:22:09 by msambo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				word_ctr(char const *str, char c)
{
	int			i;
	int			word;

	i = 0;
	word = 0;
	while (str[i] != '\0')
	{
		while ((str[i] == c) && (str[i] != '\0'))
			i++;
		if ((str[i] != c) && (str[i] != '\0'))
			word++;
		while ((str[i] != c) && (str[i] != '\0'))
			i++;
	}
	return (word);
}

static char		**mk_wrd_array(char const *s, char **wrds_hold, char c)
{
	int			i;
	int			j;
	int			k;

	i = 0;
	j = 0;
	k = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if ((s[i] != c) && (s[i] != '\0'))
		{
			k = i;
			while ((s[i] != c) && (s[i] != '\0'))
				i++;
			wrds_hold[j] = ft_strsub(s, k, (i - k));
			j++;
		}
	}
	wrds_hold[j] = NULL;
	return (wrds_hold);
}

char			**ft_strsplit(char const *s, char c)
{
	char		**strs_array;
	int			wrds;

	if (s)
	{
		wrds = word_ctr(s, c);
		strs_array = NULL;
		if (!(strs_array = (char**)malloc((1 + wrds) * sizeof(char*))))
			return (NULL);
		else
			mk_wrd_array(s, strs_array, c);
		return (strs_array);
	}
	return (NULL);
}

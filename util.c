/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msambo <msambo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 12:42:18 by msambo            #+#    #+#             */
/*   Updated: 2020/01/15 09:29:00 by msambo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"
 
void	ft_flag_active(t_info *flags, char *str)
{
	if (flags->flag_l == 1 || flags->flag_a == 1 || flags->flag_r == 1
			|| flags->flag_time == 1 || flags->flag_R == 1)
		flags->flag_active = '1';
	if (flags->flag_active == '0')
	{
		flags->errors = '1';
		ft_putstr("ls: invalid option --");
		ft_putstr(str);
		ft_putstr("\nUse: ls [ - ] [alrtnogR] [file ..]\n");
		exit(0);
	}
}

int		set_flags(char **str, t_info *flags)
{
	int		i;
	i = 0;
	while (str[i] != NULL)
	{
		if (str[i][0] == '-')
		{
			if (ft_strchr(str[i], 'l'))
				flags->flag_l = 1;
			if (ft_strchr(str[i], 'a'))
				flags->flag_a = 1;
			if (ft_strchr(str[i], 'r'))
				flags->flag_r = 1;
			if (ft_strchr(str[i], 't'))
				flags->flag_time = 1;
			if (ft_strchr(str[i], 'R'))
				flags->flag_R = 1;
			ft_flag_active(flags, str[i]);
		}
		i++;
	}
	str = NULL;
	return (1);
}

void	ft_protector(char **new, char *dir)
{
	int i;

	i = 0;
	if (errno == 2)
	{
		ft_putstr("ft_ls: ");
		ft_putstr(dir);
		ft_putendl(": No such file or directory");
		exit(0);
	}
	if (errno == 13)
	{
		ft_putstr("ft_ls: ");
		ft_putstr(dir);
		ft_putendl(": Permission denied");
		exit(0);
	}
	if (errno == 20)
	{
		new[0] = ft_strdup(dir);
		new[1] = NULL;
	}
}


void	ft_sort(char **new)
{
	char	*tmp;
	int		i;
	int		j;
	char	*str;

	i = 0;
	while (new[i] != NULL)
	{
		j = i + 1;
		while (new[j] != NULL)
		{
			if (ft_strcmp(new[i], new[j]) > 0)
			{
				str = ft_strdup(new[i]);
				tmp = new[i];
				new[i] = ft_strdup(new[j]);
				ft_strdel(&tmp);
				tmp = new[j];
				new[j] = str;
				ft_strdel(&tmp);
			}
			j++;
		}
		i++;
	}
}
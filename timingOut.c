/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   timingOut.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msambo <msambo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 12:42:09 by msambo            #+#    #+#             */
/*   Updated: 2020/01/15 09:28:12 by msambo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

char	*ft_path(char *filename, char *dir)
{
	char *ret;
	char *ptr;
	int check;
 
	check = ft_strequ(dir, filename);
	if(check == 1)
		dir = ".";
	else
	{
		
	}

	ret = NULL;
	ptr = NULL;
	ptr = ft_strjoin(dir, "/");
	ret = ft_strjoin(ptr, filename);
	ft_strdel(&ptr);	
	return (ret);
}

void	ft_swap(char **new, int a, int b)
{
	char *temp;

	temp = ft_strdup(new[a]);
	ft_strdel(&new[a]);
	new[a] = ft_strdup(new[b]);
	ft_strdel(&new[b]);
	new[b] = ft_strdup(temp);
	ft_strdel(&temp);
}

void	ft_time_sort_struct(char *dir, char **new, int i, int j)
{
	struct stat a;
	struct stat b;
	char		*str;

	stat((str = ft_path(new[i], dir)), &a);
	ft_strdel(&str);
	stat((str = ft_path(new[j], dir)), &b);
	ft_strdel(&str);
	if (a.st_mtimespec.tv_sec < b.st_mtimespec.tv_sec)
		ft_swap(new, i, j);
	if (a.st_mtimespec.tv_sec == b.st_mtimespec.tv_sec)
	{
		if (a.st_mtimespec.tv_nsec < b.st_mtimespec.tv_nsec)
			ft_swap(new, i, j);
		if (a.st_mtimespec.tv_nsec == b.st_mtimespec.tv_nsec)
			if (ft_strcmp(new[i], new[j]) < 0)
				ft_swap(new, i, j);
	}
}

char	**ft_time_sort(char **new, char *dir)
{
	int			i;
	int			j;

	i = 0;
	j = 0;
	while (new[i])
	{
		j = i + 1;
		while (new[j])
		{
			ft_time_sort_struct(dir, new, i, j);
			j++;
		}
		i++;
	}
	return (new);
}

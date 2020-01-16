/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msambo <msambo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 12:42:29 by msambo            #+#    #+#             */
/*   Updated: 2020/01/16 09:18:21 by msambo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int directory(const char *location)
{
	struct stat statbuf;

	if (stat(location, &statbuf) != 0)
		return (0);
	return (S_ISDIR(statbuf.st_mode));
}

void		 checker(char **str, t_info *flags)
{
	int 	record;
	int 	i;
	int 	j;
	char 	**just_string;
	char 	**new;

	record = 0;
	i = 0;
	j = 0;
	record = recorded(str);
	just_string = (char **)malloc(sizeof(char *) * (record + 1));
	i = 0;
	while (str[i] != NULL)
	{
		if (directory(str[i]) == 0)
		{
			just_string[j] = ft_strdup(str[i]);
			j++;
		}
		i++;
	}
	just_string[j] = NULL;
	new = (char **)malloc(sizeof(char *) * (record + 1));
	ft_content_reader(new, flags, just_string, record);
	i =0;
	while(new[i])
	{
		ft_putendl(new[i]);
				i++;
	}
	word_destory(new);
}

void		ft_content_reader(char **new, t_info *flag, char **content, int record)
{
	DIR 	*currentdir;
	char 	*dir;
	int 	i;
	
	dir = ft_strdup(".");
	
	if (!(currentdir = opendir(dir)))
		ft_protector(new, dir);
	if (currentdir)
		 ft_content_maker(new, flag, &dir, content);
	ft_content_flags(new, &dir, flag);
	if (directory(dir) == 0)
		ft_putendl("");
	else
		closedir(currentdir);
	ft_strdel(&dir);
}

void	ft_content_maker(char **new, t_info *flag, char **dir, char **content)
{
	int 			i;
	int 			j;
	struct dirent 	*files;
	DIR 			*curdir;

	i = 0;
	j = 0;

	while (content[j])
	{
		curdir = opendir(*dir);
		while ((files = readdir(curdir)) != NULL)
		{
			if (ft_strcmp(files->d_name, content[j]) == 0)
			{
				new[i] = ft_strdup(files->d_name);
				i++;
			}	
		}
		j++;
		closedir(curdir);
	}
	new[i] = NULL;
}
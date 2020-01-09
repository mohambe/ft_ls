#include "ft_ls.h"

int	count(char *dir)
{
	int				i;
	DIR				*curdir;
	struct dirent	*files;

	i = 0;
	curdir = opendir(dir);
	if (!curdir)
		return (1);
	while ((files = readdir(curdir)) != NULL)
		i++;
	if (curdir)
		closedir(curdir);
	return (i);
}

void	ft_content_flags(char **new, char **dir, t_info *flag)
{
	ft_sort(new);
/*	if (flag->flag_time == 1)
		new = ft_time_sort(new, *dir);*/
	if (flag->flag_r == 1)
		new = ft_reverse(new);
}


void	ft_content_while(char **new, t_info *flag, char **dir)
{
	int				i;
	int				j;
	struct dirent	*files;
	DIR				*curdir;

	i = 0;
	j = 0;

	curdir = opendir(*dir);

	while ((files = readdir(curdir)) != NULL)
	{
		if (flag->flag_a == 0 && files->d_name[0] != '.')
		{
			new[i++] = ft_strdup(files->d_name);
		}
		if (flag->flag_a == 1)
		{
			new[i++] = ft_strdup(files->d_name);
		}
	}
	new[i] = NULL;
	closedir(curdir);
}

char	**ft_content(char **new, t_info *flag, char **dir)
{
	DIR		*currentdir;

	new = (char **)malloc(sizeof(char *) * count(dir[0]) + 1);
	if (!(currentdir = opendir(*dir)))
		ft_protector(new, *dir);
	if (currentdir)
	{
		ft_content_while(new, flag, dir);
	}
	ft_content_flags(new, dir, flag);
	closedir(currentdir);
	return (new);
}

void	word_destory(char **ptr)
{
	int i;
	
	i = 0;
	if (*ptr != NULL && ptr != NULL )
	{
		while (ptr[i])
			ft_strdel(&ptr[i++]);
		free(ptr);	
	}
}

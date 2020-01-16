/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msambo <msambo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 12:41:46 by msambo            #+#    #+#             */
/*   Updated: 2020/01/16 09:12:06 by msambo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LS_H
#define FT_LS_H

# include <sys/types.h>
# include <sys/stat.h>
# include <dirent.h>
# include <pwd.h>
# include <grp.h>
# include <time.h>
# include <errno.h>
# include <stdio.h>
# include "./includes/libft.h"

typedef struct s_info
{
    int			flag_l;
	int			flag_a;
	int			flag_r;
	int			flag_time;
    int			flag_R;
	int         errors;
    char		 flag_active;
}               t_info;

int				set_flags(char **str, t_info *flags);
int				Acounter(char **array);
void			ft_protector(char **new, char *dir);
char			**ft_content(char **new, t_info *flag, char **dir);
void			ft_content_flags(char **new, char **dir, t_info *flag);
void			ft_content_while(char **new, t_info *info, char **dir);
void			ft_sort(char **new);
int				count(char *dir);
void			ft_no_argument(char **str, t_info *flag);
char			**ft_time_sort(char **new, char *dir);
void			ft_time_sort_struct(char *dir, char **new, int i, int j);
void			ft_swap(char **new, int a, int b);
char			*ft_path(char *filename, char *dir);
char			**ft_reversing(char **str, char **new);
char			**ft_reverse(char **new);
void			ft_file_info(char **ptr, char *dir);
int				usi_rights(char *ptr, char *dir);
void			group_rights(struct stat ptr);
void			ft_rights(struct stat mode);
void			handle_date(struct stat s);
void			ft_space(int i, int b);
int				ft_count_nbr(int i);
blkcnt_t 		blockcount(char **directory);
void 	 		blockcount_result(blkcnt_t count);
void			word_destory(char **ptr);
int				directory(const char *location);
void			checker(char **str, t_info *flags);
void			ft_content_maker(char **new, t_info *flag, char **dir, char **content);
void			ft_content_reader(char **new, t_info *flag, char **content, int record);
int     		recorded(char **str);

#endif
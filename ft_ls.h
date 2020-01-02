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
    char		flag_active;
}               t_info;

int		set_flags(char **str, t_info *flags);
// void	ft_flag_active(t_info *flags, char *str);
#endif
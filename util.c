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
				{
                flags->flag_l = 1;
                ft_putendl(" ");
                ft_putnbr(flags->flag_l);
                ft_putendl(" ");}
			if (ft_strchr(str[i], 'a'))
				{flags->flag_a = 1;
                ft_putnbr(flags->flag_a);
                ft_putendl(" ");}
			if (ft_strchr(str[i], 'r'))
				{flags->flag_r = 1;
                ft_putnbr(flags->flag_r);}
			if (ft_strchr(str[i], 't'))
				{flags->flag_time = 1;
                ft_putendl("\n t");}
			if (ft_strchr(str[i], 'R'))
				flags->flag_R = 1;
			ft_flag_active(flags, str[i]);
		}
		i++;
	}
	return (1);
}
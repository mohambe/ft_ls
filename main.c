#include "ft_ls.h"

t_info *ft_reset(void)
{
    t_info *info;

    info = (t_info *)malloc(sizeof(t_info));

    info->flag_a = 0;
    info->flag_l = 0;
    info->flag_r =0;
    info->flag_time =0;
    info->errors =0;
    info->flag_active='0';

    return info;
}


char **ft_deciper(char **str, int argument_counter)
{
	int		i;
	int		j;
	char	**s;

	i = 1;
	j = 0;
	s = (char **)malloc(sizeof(char *) * argument_counter * (256 * 256));
	while (str[i] != NULL)
	{
		if (str[i][0] != '-')
		{
			s[j] = ft_strdup(str[i]);
			j++;
		}
		i++;
	}
	s[j] = NULL;
	return (s);
}

int     main(int ac, char **av)
{
    char **input; 
    char **file; // directory    
    t_info *flags;
    
    file = NULL;
    // flag = av[1];
    // file = av[2];
 
    
    flags = ft_reset();
    input = ft_deciper(av, ac);
    int i, j = 0;
    while(input[i]){
        ft_putstr(input[i]);
        ft_putstr("\n");
        i++;
    }

    if(ac > 2)
    {
        set_flags(av, flags);
    }
     
    exit(0);

    return 0;
}
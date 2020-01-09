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

char **ft_deciper(char **str, int ac)
{
	int		i;
	int		j;
	char	**s;

	i = 1;
	j = 0;
	s = (char **)malloc(sizeof(char *) * (ac));
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

void do_something(char **str, t_info *flags)
{
    int i;
    int j;
    char **constent;

    constent = NULL;
    i = 0;
    j = 0;
    
    while(str[j] && flags->errors == 0 && j < (256 * 256))
    {
        if(Acounter(str) > 1)
        {
            ft_putstr(str[j]);
            ft_putendl(":"); 
        }
        constent = ft_content(constent,flags, &str[j]);
        i = 0;

        if(flags->flag_l == 1)
        {
            ft_file_info(constent,str[j]);
        }
        while (constent[i] != NULL && flags->flag_l == 0)
        ft_putendl(constent[i++]);
        j++;
    }
	word_destory(constent);
}
int wordLEN(char **words){
    int i = 0;

    if (words != NULL){
        ft_putstr(words[0]);
        while (words[i])
        {
            i++;
        }
    }
    return i;
}
void	ft_no_argument(char **str, t_info *flag)
{
	int		i;
	char	**new;

	i = 0;
	new = NULL;
    if(*str == NULL)
        *str = ft_strdup(".");
    else
        ft_putstr(*str);
    new = ft_content(new, flag, str);
	while (new[i] != NULL)
    ft_putendl(new[i++]);
    word_destory(new);
}

int     main(int ac, char **av)
{
    char **input;   
    t_info *flags;

    input = NULL;    
    flags = ft_reset();
    input = ft_deciper(av, ac);
    int i;
    int j;
    
    i = 0;
    j = 0;
    if (*input == NULL)
    {
        set_flags(av, flags);
        ft_no_argument(input, flags);
    }
    else if(ac > 1 && *input != NULL)
    {
        set_flags(av, flags);
        do_something(&input[j],flags);
    }
   //  i =0;
    
    // while(input[i] != NULL)
    // {
        ft_strdel(&input[0]);
	free(input);
	input = NULL;

        // free(input[i]);
    //     i++;
    // }
    free(flags);
    flags = NULL;
/*
    sleep(200);*/
    return 0;
}

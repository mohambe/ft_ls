#include "ft_ls.h"

blkcnt_t blockcount(char **directory)
{
    blkcnt_t size;
    int i;
    struct stat fileStat;
    
    size = 0;
    i = 0;
    while(directory[i])
    {
        if (directory[i][0] != '.')
        {
            stat(directory[i], &fileStat);
            size += fileStat.st_blocks;
        }
        i++;
    }
    return size;
}

void blockcount_result(blkcnt_t count)
{
    ft_putstr("total ");
	ft_putnbr(count);
	ft_putendl(" ");
}

void	ft_space(int i, int b)
{
	int a;

	a = 0;
	while (a < (b - i))
	{
		ft_putchar(' ');
		a++;
	}
}

int		ft_count_nbr(int i)
{
	int a;

	a = 0;
	while (i /= 10)
		a++;
	return (a);
}

int	Acounter(char **array)
{
	int i;

	i = 0;
	while (array[i] != NULL)
		i++;
	return (i);
}
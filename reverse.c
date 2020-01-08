#include "ft_ls.h"

char	**ft_reversing(char **str, char **new)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_strdel(&new[i]);
		new[i] = ft_strdup(str[i]);
		i++;
	}
	return (new);
}

char	**ft_reverse(char **new)
{
	char	**str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	j = Acounter(new) - 1;
	str = (char **)malloc(sizeof(char *) * (j + 2));
	while (j >= 0)
		str[i++] = ft_strdup(new[j--]);
	str[i] = NULL;
	new = ft_reversing(str, new);
	// ft_delete(str); delete later
	word_destory(str);
	return (new);
}

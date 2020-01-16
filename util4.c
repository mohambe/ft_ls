/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util4.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msambo <msambo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 08:55:00 by msambo            #+#    #+#             */
/*   Updated: 2020/01/16 09:14:51 by msambo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int     recorded(char **str)
{
    int record;
    int i;

    i = 0;
    record = 0;
    
    while (str[i] != NULL)
	{
		if (directory(str[i]) == 0)
			record++;
		else
			 ft_putstr("");
		i++;
	}
    return record;
}
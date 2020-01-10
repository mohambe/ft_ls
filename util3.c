/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msambo <msambo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 12:42:29 by msambo            #+#    #+#             */
/*   Updated: 2020/01/10 12:42:32 by msambo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int		directory(const char *location)
{
	struct stat statbuf;

	if (stat(location, &statbuf) != 0)
		return (0);
	return (S_ISDIR(statbuf.st_mode));
}
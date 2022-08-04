/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fd_addchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 01:25:51 by jkoskela          #+#    #+#             */
/*   Updated: 2021/02/06 18:28:49 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

void		fd_addchar(char c, int fd)
{
	if (!(write(fd, &c, 1)))
		return ;
}

/*
**  ----------------------------------------------------------------------------
**
**	Fd_addchar
**
**	Add a character to a file.
**
**  ----------------------------------------------------------------------------
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_parse.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 08:36:06 by jkoskela          #+#    #+#             */
/*   Updated: 2020/12/14 14:24:39 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/fdf.h"

t_dlist		*input_parse(char *input_file)
{
	int			fd;
	int			row;
	int			col;
	int			i;
	int			j;
	int			sign;
	char		tmp[10];
	char		*line;
	t_dlist		*out;

	fd = open(input_file, O_RDONLY);
	col = 0;
	row = 0;
	i = 0;
	j = 0;
	sign = 1;
	out = NULL;
	while (fd_readline(fd, &line) > 0)
	{
		while (line[i])
		{
			if (line[i] == '-')
			{
				sign = -1;
				i++;
			}
			else if (is_digit(line[i]))
			{
				while (is_digit(line[i]))
					tmp[j++] = line[i++];
				j = 0;
			}
			else if (line[i] == ' ')
			{
				dl_putlast(&out, vtx_new(row, c_atoi(tmp) * sign, col, 1.0));
				while (line[i] == ' ')
					i++;
				row++;
				sign = 1;
			}
		}
		dl_putlast(&out, vtx_new(row, c_atoi(tmp) * sign, col, 1.0));
		sign = 1;
		i = 0;
		row = 0;
		col++;
	}
	close(fd);
	return (out);
}

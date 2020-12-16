/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   construct_program.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 02:53:38 by jkoskela          #+#    #+#             */
/*   Updated: 2020/12/15 17:06:10 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/fdf.h"

t_program			*construct_program(double resx, double resy)
{
	t_program		*out;

	out = (t_program *)v_alloc(sizeof(t_program));
	out->name = s_dup("fdf");
	out->resx = resx;
	out->resy = resy;
	out->world = construct_world();
	out->world->camera = construct_camera();
	return (out);
}

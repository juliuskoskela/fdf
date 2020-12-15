/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   translation.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 17:55:25 by jkoskela          #+#    #+#             */
/*   Updated: 2020/12/15 04:22:27 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/fdf.h"

t_mtx			*translation(double *vtx)
{
	t_mtx		*out;
	double		trans[16] = {1.0, 0.0, 0.0, vtx[0],
							0.0, 1.0, 0.0, vtx[1],
							0.0, 0.0, 1.0, vtx[2],
							0.0, 0.0, 0.0, 1.0,};
	out = mtx_cpy(trans, 4, 4);
	out->name = s_dup("T");
	return(out);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mtx_vtx.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 17:56:09 by jkoskela          #+#    #+#             */
/*   Updated: 2020/12/13 18:08:27 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/fdf.h"

double			*mtx_vtx(t_mtx *mtx, double vtx[])
{
	double		*out;

	out = (double *)v_alloc(sizeof(double) * 4);
	out[0] = (vtx[0] * mtx->this[0]) + (vtx[1] * mtx->this[1]) + (vtx[2] * mtx->this[2]) + (vtx[3] * mtx->this[3]);
	out[1] = (vtx[0] * mtx->this[4]) + (vtx[1] * mtx->this[5]) + (vtx[2] * mtx->this[6]) + (vtx[3] * mtx->this[7]);
	out[2] = (vtx[0] * mtx->this[8]) + (vtx[1] * mtx->this[9]) + (vtx[2] * mtx->this[10]) + (vtx[3] * mtx->this[11]);
	out[3] = (vtx[0] * mtx->this[12]) + (vtx[1] * mtx->this[13]) + (vtx[2] * mtx->this[14]) + (vtx[3] * mtx->this[15]);
	return (out);
}

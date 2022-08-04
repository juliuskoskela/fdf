/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   g_rotation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 00:51:01 by jkoskela          #+#    #+#             */
/*   Updated: 2021/03/08 21:11:42 by julius           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

t_mtx4			g_rotation(double x, double y, double z)
{
	t_mtx4		out;

	out = g_mult_mtx(g_mult_mtx(g_rotx(x), g_rotx(y)), g_rotz(z));
	return (out);
}

/*
**  ----------------------------------------------------------------------------
**
**	G_rotation
**
**	Combanes x. y and z rotations.
**
**  ----------------------------------------------------------------------------
*/

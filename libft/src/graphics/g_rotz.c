/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   g_rotz.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 19:36:32 by jkoskela          #+#    #+#             */
/*   Updated: 2021/03/03 06:38:28 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

t_mtx4			g_rotz(double rot)
{
	t_mtx4		out;

	out.v1 = g_vct4(cos(m_rad(rot)), -sin(m_rad(rot)), 0.0, 0.0);
	out.v2 = g_vct4(sin(m_rad(rot)), cos(m_rad(rot)), 0.0, 0.0);
	out.v3 = g_vct4(0.0, 0.0, 1.0, 0.0);
	out.v4 = g_vct4(0.0, 0.0, 0.0, 1.0);
	return (out);
}

/*
**  ----------------------------------------------------------------------------
**
**	G_rotz
**
**	Create a rotation matrix of `rot` degrees in the z rot.
**
**  ----------------------------------------------------------------------------
*/

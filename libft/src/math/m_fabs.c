/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_fabs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 01:47:47 by jkoskela          #+#    #+#             */
/*   Updated: 2021/01/23 17:14:32 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

double			m_fabs(double n)
{
	if (n < 0)
		return (n * -1);
	else
		return (n);
}

/*
**  ----------------------------------------------------------------------------
**
**	M_fabs
**
**	Return the absolute (positive) value of a floating point number.
**
**  ----------------------------------------------------------------------------
*/

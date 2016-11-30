/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rmat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaurent <olaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/12 11:49:55 by olaurent          #+#    #+#             */
/*   Updated: 2016/09/13 09:50:35 by olaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

/*
** Generates the 3d rotation matrix with angle a around X axis
*/

t_mat		*ft_rmatx(double a)
{
	t_mat	*mr;

	if (!(mr = ft_matid(3)))
		return (NULL);
	mr[1][1] = ft_cos(a);
	mr[1][2] = -ft_sin(a);
	mr[2][1] = -mr[1][2];
	mr[2][2] = mr[1][1];
	return (mr);
}

/*
** Generates the 3d rotation matrix with angle a around Y axis
*/

t_mat		*ft_rmaty(double a)
{
	t_mat	*mr;

	if (!(mr = ft_matid(3)))
		return (NULL);
	mr[0][0] = ft_cos(a);
	mr[0][2] = ft_sin(a);
	mr[2][0] = -mr[0][2];
	mr[2][2] = mr[0][0];
	return (mr);
}

/*
** Generates the 3d rotation matrix with angle a around Z axis
*/

t_mat		*ft_rmatz(double a)
{
	t_mat	*mr;

	if (!(mr = ft_matid(3)))
		return (NULL);
	mr[0][0] = ft_cos(a);
	mr[0][1] = -ft_sin(a);
	mr[1][0] = -mr[0][1];
	mr[1][1] = mr[0][0];
	return (mr);
}

/*
** Generates the 3d rotation matrix with angle a around vector v
*/

t_mat		*ft_rmat3d(t_vec *v, double a)
{
	t_mat	*mr;

	return (mr);
}

/*
** Generates the 2d rotation matrix of angle a
*/

t_mat		*ft_rmat2d(double a)
{
	t_mat	*mr;

	if (!(mr = ft_newmat(2)))
		return (NULL);
	mr[0][0] = ft_cos(a);
	mr[0][1] = -ft_sin(a);
	mr[1][0] = -mr[0][1];
	mr[1][1] = mr[0][0];
	return (mr);
}

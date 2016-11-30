/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rmat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaurent <olaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/12 11:49:55 by olaurent          #+#    #+#             */
/*   Updated: 2016/11/30 19:31:56 by olaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

/*
** Generates the 3d rotation matrix with angle a around X axis
*/

t_mat		*ft_rmatx(double a)
{
	t_mat	*mr;

	if (!(mr = ft_matid(3, NULL)))
		return (NULL);
	mr->m[1][1] = ft_cos(a);
	mr->m[1][2] = -ft_sin(a);
	mr->m[2][1] = -mr->m[1][2];
	mr->m[2][2] = mr->m[1][1];
	return (mr);
}

/*
** Generates the 3d rotation matrix with angle a around Y axis
*/

t_mat		*ft_rmaty(double a)
{
	t_mat	*mr;

	if (!(mr = ft_matid(3, NULL)))
		return (NULL);
	mr->m[0][0] = ft_cos(a);
	mr->m[0][2] = ft_sin(a);
	mr->m[2][0] = -mr->m[0][2];
	mr->m[2][2] = mr->m[0][0];
	return (mr);
}

/*
** Generates the 3d rotation matrix with angle a around Z axis
*/

t_mat		*ft_rmatz(double a)
{
	t_mat	*mr;

	if (!(mr = ft_matid(3, NULL)))
		return (NULL);
	mr->m[0][0] = ft_cos(a);
	mr->m[0][1] = -ft_sin(a);
	mr->m[1][0] = -mr->m[0][1];
	mr->m[1][1] = mr->m[0][0];
	return (mr);
}

/*
** Generates the 3d rotation matrix with angle a around vector v
*/

t_mat		*ft_rmat3d(t_vec *v, double a)
{
	t_mat	*mr;
	t_mat	*tmpm;
	t_vec	*tmpv;

	if (!(mr = ft_matid(3, NULL)))
		return (NULL);
	ft_matmul(mr, ft_cos(a), mr);
	if (!(tmpv = ft_vecunit(v)))
		return (NULL);
	if (!(tmpm = ft_veccmat(tmpv)))
		return (NULL);
	ft_matmul(tmpm, ft_sin(a), tmpm);
	ft_matadd(mr, tmpm, mr);
	ft_vectprod(tmpv, tmpv, tmpm);
	ft_matmul(tmpm, 1 - ft_cos(a), tmpm);
	ft_matadd(mr, tmpm, mr);
	return (mr);
}

/*
** Generates the 2d rotation matrix of angle a
*/

t_mat		*ft_rmat2d(double a)
{
	t_mat	*mr;

	if (!(mr = ft_newmat(2, 2)))
		return (NULL);
	mr->m[0][0] = ft_cos(a);
	mr->m[0][1] = -ft_sin(a);
	mr->m[1][0] = -mr->m[0][1];
	mr->m[1][1] = mr->m[0][0];
	return (mr);
}

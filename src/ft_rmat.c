/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rmat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaurent <olaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/12 11:49:55 by olaurent          #+#    #+#             */
/*   Updated: 2016/12/01 17:50:28 by olaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

/*
** Generates the 3d rotation matrix with angle a around X axis
*/

t_mat		*ft_rmatx(double a, t_mat *dst)
{
	t_mat	*mr;

	if (dst && dst->l == 3 && dst->c == 3)
		mr = ft_matid(3, dst);
	else if (!(mr = ft_matid(3, NULL)))
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

t_mat		*ft_rmaty(double a, t_mat *dst)
{
	t_mat	*mr;

	if (dst && dst->l == 3 && dst->c == 3)
		mr = ft_matid(3, dst);
	else if (!(mr = ft_matid(3, NULL)))
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

t_mat		*ft_rmatz(double a, t_mat *dst)
{
	t_mat	*mr;

	if (dst && dst->l == 3 && dst->c == 3)
		mr = ft_matid(3, dst);
	else if (!(mr = ft_matid(3, NULL)))
		return (NULL);
	mr->m[0][0] = ft_cos(a);
	mr->m[0][1] = -ft_sin(a);
	mr->m[1][0] = -mr->m[0][1];
	mr->m[1][1] = mr->m[0][0];
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

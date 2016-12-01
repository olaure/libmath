/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rmat3d.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaurent <olaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 17:37:36 by olaurent          #+#    #+#             */
/*   Updated: 2016/12/01 17:52:56 by olaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

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
	if (!ft_matmul(mr, ft_cos(a), mr))
		return (NULL);
	if (!(tmpv = ft_vecunit(v, NULL)))
		return (NULL);
	if (!(tmpm = ft_veccmat(tmpv, NULL)))
		return (NULL);
	if (!ft_matmul(tmpm, ft_sin(a), tmpm))
		return (NULL);
	if (!ft_matadd(mr, tmpm, mr))
		return (NULL);
	if (!ft_vectprod(tmpv, tmpv, tmpm))
		return (NULL);
	if (!ft_matmul(tmpm, 1 - ft_cos(a), tmpm))
		return (NULL);
	if (!ft_matadd(mr, tmpm, mr))
		return (NULL);
	return (mr);
}

t_mat		*ft_rmatrpy(double roll, double pitch, double yaw, t_mat *dst)
{
	t_mat	*mr;
	t_mat	*tmp;

	if (dst && dst->c == 3 && dst->l == 3)
		mr = dst;
	else if (!(mr = ft_matid(3, NULL)))
		return (NULL);
	if (!ft_rmatx(roll, mr))
		return (NULL);
	if (!(tmp = ft_rmaty(pitch, NULL)))
		return (NULL);
	ft_matmatmul(mr, tmp, mr);
	ft_rmatz(yaw, tmp);
	ft_matmatmul(mr, tmp, mr);
	return (mr);
}

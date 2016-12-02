/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matproj.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaurent <olaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/02 17:18:50 by olaurent          #+#    #+#             */
/*   Updated: 2016/12/02 18:21:35 by olaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_matrices.h"

/*
** OpenGL projection matrix
** far and near are the clipping planes
** fov is the field of view (in degrees)
** ration is the screen ratio
*/

t_mat	*ft_matproj(double far, double near, double fov, double ratio)
{
	t_mat	*m;
	double	scale;

	if (!(m = ft_matid(4, NULL)))
		return (NULL);
	scale = (fov * PI) / 360;
	scale = 1.0 / (ft_tan(scale));
	m->m[0][0] = scale;
	m->m[1][1] = scale * ratio;
	scale = - far / (far - near);
	m->m[2][2] = scale;
	m->m[3][2] = scale * near;
	m->m[2][3] = -1;
	m->m[3][3] = 0.0;
	return (m);
}

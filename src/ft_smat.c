/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_smat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaurent <olaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/11 12:54:01 by olaurent          #+#    #+#             */
/*   Updated: 2016/12/01 13:46:56 by olaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

/*
** This outputs the scaling matrix in homogeneous coordinates
** The vector's coordinates are the scaling parameters
*/

t_mat		*ft_smat(t_vec *v)
{
	t_mat	*m;
	int		i;
	int		d;

	d = v->d;
	if (!(m = ft_matid(d, 0)))
		return (NULL);
	i = -1;
	while (++i < d - 1)
		m->m[d - 1][i] = v->v[i];
	return (m);
}

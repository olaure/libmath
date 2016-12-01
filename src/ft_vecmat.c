/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vecmat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaurent <olaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/10 15:57:08 by olaurent          #+#    #+#             */
/*   Updated: 2016/12/01 17:29:45 by olaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

/*
** This calculates the action of a vector on a matrix
*/

t_vec	*ft_vecmat(t_vec *v, t_mat *m, t_vec *dst)
{
	t_vec	*res;
	int		i;
	int		j;

	if (m->l != v->d)
		return (NULL);
	if (!(res = ft_newvec(m->c)))
		return (NULL);
	i = -1;
	while (++i < res->d)
	{
		j = -1;
		while (++j < v->d)
			res->v[j] += m->m[i][j] * v->v[i];
	}
	if (dst && dst->d == res->d)
	{
		ft_veccpy(res, dst);
		ft_delvec(&res);
		return (dst);
	}
	return (res);
}

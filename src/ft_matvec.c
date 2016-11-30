/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matvec.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaurent <olaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/10 14:57:12 by olaurent          #+#    #+#             */
/*   Updated: 2016/09/10 15:20:46 by olaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

/*
** This calculates the action of a matrix on a vector
*/

t_vec	*ft_matvec(t_mat *m, t_vec *v)
{
	t_vec	*res;
	int		i;
	int		j;

	if (m->c != v->d)
		return (NULL);
	if (!(res = ft_newvec(m->l)))
		return (NULL);
	i = -1;
	while (++i < res->d)
	{
		j = -1;
		while (++j < v->d)
			res->v[i] += m->m[i][j] * v->v[j];
	}
	return (res);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tmat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaurent <olaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/11 12:47:30 by olaurent          #+#    #+#             */
/*   Updated: 2016/12/01 17:35:22 by olaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

/*
** This outputs the translation matrix associated with the vector
*/

t_mat		*ft_tmat(t_vec *v, t_mat *dst)
{
	t_mat	*m;
	int		i;
	int		d;

	d = v->d;
	if (dst && dst->l == d && dst->c == d)
		m = ft_matid(d, dst);
	else if (!(m = ft_matid(d, 0)))
		return (NULL);
	i = -1;
	while (++i < d)
		m->m[d - 1][i] = v->v[i];
	return (m);
}

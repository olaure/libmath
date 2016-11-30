/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_veccmat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaurent <olaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/12 12:20:00 by olaurent          #+#    #+#             */
/*   Updated: 2016/11/30 19:14:49 by olaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

/*
** This outputs the cross matrix associated with a vector
** Emjk aj = Mmk
*/

t_mat		*ft_veccmat(t_vec *v)
{
	t_mat	*m;

	if (v->d != 3)
		return (NULL);
	if (!(m = ft_newmat(v->d, v->d)))
		return (NULL);
	m->m[0][0] = 0;
	m->m[0][1] = v->v[2];
	m->m[0][2] = -v->v[1];
	m->m[1][0] = -v->v[2];
	m->m[1][1] = 0;
	m->m[1][2] = v->v[0];
	m->m[2][0] = -v->v[2];
	m->m[2][1] = v->v[1];
	m->m[2][2] = 0;
	return (m);
}

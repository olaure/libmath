/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_veccrp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaurent <olaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/10 14:14:23 by olaurent          #+#    #+#             */
/*   Updated: 2016/12/01 16:01:51 by olaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

/*
** This returns in a new vector the cross product between the two vectors
** If one of them is not of dimension 3, the result is NULL
*/

t_vec	*ft_veccrp(t_vec *v1, t_vec *v2, t_vec *dst)
{
	t_vec	*vr;

	if (v1->d != 3 || v2->d != 3)
		return (NULL);
	if (dst && dst->d == 3)
		vr = dst;
	else if (!(vr = ft_newvec(3)))
		return (NULL);
	vr->v[0] = v1->v[1] * v2->v[2] - v1->v[2] * v2->v[1];
	vr->v[1] = v1->v[2] * v2->v[0] - v1->v[0] * v2->v[2];
	vr->v[2] = v1->v[0] * v2->v[1] - v1->v[1] * v2->v[0];
	return (vr);
}

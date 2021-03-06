/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vecunit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaurent <olaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/11 11:04:22 by olaurent          #+#    #+#             */
/*   Updated: 2016/12/01 16:05:20 by olaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

t_vec		*ft_vecunit(t_vec *v, t_vec *dst)
{
	t_vec	*vr;
	int		i;
	double	norm;

	if (dst && dst->d == v->d)
		vr = dst;
	else if (!(vr = ft_newvec(v->d)))
		return (NULL);
	norm = ft_vecnorm(v);
	if (norm != norm)
		return (NULL);
	i = -1;
	while (++i < v->d)
		vr->v[i] = v->v[i] / norm;
	return (vr);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec2hvec.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaurent <olaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/02 18:13:03 by olaurent          #+#    #+#             */
/*   Updated: 2016/12/02 18:21:12 by olaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

t_vec	*ft_vec2hvec(t_vec *v, t_vec *dst)
{
	t_vec	*vr;
	int		i;

	if (!v)
		return (NULL);
	if (dst && dst->d == 4)
		vr = dst;
	else if (!(vr = ft_newvec(4)))
		return (NULL);
	i = 0;
	while (i++ < v->d)
		vr->v[i - 1] = v->v[i - 1];
	while (i < vr->d - 1)
		vr->v[i++] = 0.0;
	vr->v[i] = 1.0;
	return (vr);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vecmul.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaurent <olaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/11 11:03:40 by olaurent          #+#    #+#             */
/*   Updated: 2016/12/01 15:58:51 by olaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

t_vec		*ft_vecmul(t_vec *v, double c, t_vec *dst)
{
	t_vec	*vr;
	int		i;

	if (dst && dst->d == v->d)
		vr = dst;
	else if (!(vr = ft_newvec(v->d)))
		return (NULL);
	i = -1;
	while (++i < v->d)
		vr->v[i] = v->v[i] * c;
	return (vr);
}

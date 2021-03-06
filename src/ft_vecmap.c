/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vecmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaurent <olaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/11 11:03:33 by olaurent          #+#    #+#             */
/*   Updated: 2016/12/01 16:03:01 by olaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

/*
** This applies a function with a single parameter to every element
*/

t_vec	*ft_vecmap(t_vec *v, double (*f)(double el), t_vec *dst)
{
	t_vec	*vr;
	int		i;

	if (dst && dst->d == v->d)
		vr = dst;
	else if (!(vr = ft_newvec(v->d)))
		return (NULL);
	i = -1;
	while (++i < v->d)
		vr->v[i] = f(v->v[i]);
	return (vr);
}

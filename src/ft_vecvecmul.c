/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vecvecmul.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaurent <olaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/12 19:11:58 by olaurent          #+#    #+#             */
/*   Updated: 2016/12/01 15:59:48 by olaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

/*
** This multiplies the components of two vectors to obtain a vector
*/

t_vec	*ft_vecvecmul(t_vec *v1, t_vec *v2, t_vec *dst)
{
	t_vec	*vr;
	int		i;

	if (v1->d != v2->d)
		return (NULL);
	if (dst && dst->d == v1->d)
		vr = dst;
	else if (!(vr = ft_newvec(v1->d)))
		return (NULL);
	i = -1;
	while (++i < vr->d)
		vr->v[i] = v1->v[i] * v2->v[i];
	return (vr);
}

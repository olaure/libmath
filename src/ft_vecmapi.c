/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vecmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaurent <olaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/11 11:04:04 by olaurent          #+#    #+#             */
/*   Updated: 2016/09/11 11:04:05 by olaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

/*
** This applies a function to every element depending on the index
*/

t_vec	*ft_vecmapi(t_vec *v, double (*f)(double el, int i))
{
	t_vec	*vr;
	int		i;

	if (!(vr = ft_newvec(v->d)))
		return (NULL);
	i = -1;
	while (++i < v->d)
		vr->v[i] = f(v->v[i], i);
	return (vr);
}

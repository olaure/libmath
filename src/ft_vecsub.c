/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vecsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaurent <olaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/11 11:04:14 by olaurent          #+#    #+#             */
/*   Updated: 2016/09/11 11:04:16 by olaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

t_vec		*ft_vecsub(t_vec *v1, t_vec *v2)
{
	t_vec	*vr;
	int		i;

	if (v1->d != v2->d)
		return (NULL);
	if (!(vr = ft_newvec(v1->d)))
		return (NULL);
	i = -1;
	while (++i < v1->d)
		vr->v[i] = v1->v[i] - v2->v[i];
	return (vr);
}

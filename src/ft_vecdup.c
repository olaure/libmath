/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vecdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaurent <olaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/10 13:57:47 by olaurent          #+#    #+#             */
/*   Updated: 2016/09/10 13:58:49 by olaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

/*
** This duplicates a vector structure
** It will fail in case of malloc fail
*/

t_vec	*ft_vecdup(t_vec *v)
{
	t_vec	*vd;
	int		i;

	if (!(vd = ft_newvec(v->d)))
		return (NULL);
	i = -1;
	while (++i < v->d)
		vd->v[i] = v->v[i];
	return (vd);
}

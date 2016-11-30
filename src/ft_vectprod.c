/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vectprod.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaurent <olaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/12 12:13:37 by olaurent          #+#    #+#             */
/*   Updated: 2016/09/12 12:16:59 by olaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

/*
** This returns the tensorial product between two vectors
** The return value is a matrix
*/

t_mat		*ft_vectprod(t_vec *v1, t_vec *v2)
{
	t_mat	*m;
	int		i;
	int		j;

	if (!(m = ft_newmat(v1->d, v2->d)))
		return (NULL);
	i = -1;
	while (++i < v1->d)
	{
		j = -1;
		while (++j < v2->d)
			m->m[i][j] = v1[i] * v2[j];
	}
	return (m);
}

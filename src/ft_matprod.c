/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matprod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaurent <olaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/10 09:56:48 by olaurent          #+#    #+#             */
/*   Updated: 2016/12/01 17:14:41 by olaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

/*
** This calculates the matrix product between m1 and m2 and outputs it
** If dst exists and is of proper dimensions it will be set
** Otherwise or if the product cannot be done because of size incompatiblity
** or because the malloc failed it returns NULL
*/

t_mat		*ft_matprod(t_mat *m1, t_mat *m2, t_mat *dst)
{
	t_mat	*mp;
	int		i;
	int		j;
	int		k;

	if (m1->c != m2->l || !(mp = ft_newmat(m1->l, m2->c)))
		return (NULL);
	i = -1;
	while (++i < mp->l)
	{
		j = -1;
		while (++j < m1->c)
		{
			k = -1;
			while (++k < mp->c)
				mp->m[i][k] += m1->m[i][j] * m2->m[j][k];
		}
	}
	if (dst && dst->l == m1->l && dst->c == m2->c)
	{
		ft_matcpy(mp, dst);
		ft_delmat(&mp);
		return (dst);
	}
	return (mp);
}

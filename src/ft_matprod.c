/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matprod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaurent <olaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/10 09:56:48 by olaurent          #+#    #+#             */
/*   Updated: 2016/09/13 13:22:58 by olaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

/*
** This calculates the matrix product between m1 and m2
** It stores the result in a new matrix
** If the product cannot be done because of size incompatiblity
** or because the malloc failed it returns NULL
*/

t_mat		*ft_matprod(t_mat *m1, t_mat *m2, t_mat *dest)
{
	t_mat	*mp;
	int		i;
	int		j;
	int		k;

	if (m1->c != m2->l || (dest && !(dest->l == m1->l && dest->c == m2->c)))
		return (NULL);
	if (!(mp = ft_newmat(m1->l, m2->c)))
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
	if (!dest)
		return (mp);
	ft_matcpy(mp, dest);
	ft_delmat(&mp);
	return (dest);
}

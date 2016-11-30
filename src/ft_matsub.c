/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaurent <olaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/11 11:02:29 by olaurent          #+#    #+#             */
/*   Updated: 2016/09/13 11:44:36 by olaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

/*
** Substracts m2 to m1 and outputs into dest
** If dest is NULL, it creates a new matrix
** It is protected against outputting to an input matrix
*/

t_mat		*ft_matsub(t_mat *m1, t_mat *m2, t_mat *dest)
{
	int		i;
	int		j;
	t_mat	*mr;

	if (m1->c != m2->c || m1->l != m2->l)
		return (NULL);
	if (dest && !(dest->l == m1->l && dest->c == m1->c))
		return (NULL);
	if (!(mr = ft_newmat(m1->l, m1->c)))
		return (NULL);
	i = -1;
	while (++i < m1->l)
	{
		j = -1;
		while (++j < m1->c)
			mr->m[i][j] = m1->m[i][j] - m2->m[i][j];
	}
	if (!dest)
		return (mr);
	ft_matcpy(mr, dest);
	ft_delmat(&mr);
	return (dest);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matsubm.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaurent <olaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/11 11:08:34 by olaurent          #+#    #+#             */
/*   Updated: 2016/09/13 12:52:16 by olaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

t_mat		*ft_matsubm(t_mat *m, int l, int c, t_mat *dest)
{
	t_mat	*mr;
	int		i;
	int		j;

	if (m->l < 2 || m->c < 2 || l < 0 || c < 0 || l >= m->l || c >= m->c)
		return (NULL);
	if (dest && !(dest->c == m->c - 1 && dest->l == m->l - 1))
		return (NULL);
	if (!(mr = ft_newmat(m->l - 1, m->c - 1)))
		return (NULL);
	i = -1;
	while (++i < m->l)
	{
		j = -1;
		while (++j < m->c)
			if (i != l && j != c)
				mr->m[i - (i > l ? 1 : 0)][j - (j > c ? 1 : 0)] = m->m[i][j];
	}
	if (!dest)
		return (mr);
	ft_matcpy(mr, dest);
	ft_delmat(&mr);
	return (dest);
}

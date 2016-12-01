/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matsubm.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaurent <olaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/11 11:08:34 by olaurent          #+#    #+#             */
/*   Updated: 2016/12/01 17:30:39 by olaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

t_mat		*ft_matsubm(t_mat *m, int l, int c, t_mat *dst)
{
	t_mat	*mr;
	int		i;
	int		j;
	int		addi;

	if (m->l < 2 || m->c < 2 || l < 0 || c < 0 || l >= m->l || c >= m->c)
		return (NULL);
	if (dst && dst->c == m->c - 1 && dst->l == m->l - 1)
		mr = dst;
	else if (!(mr = ft_newmat(m->l - 1, m->c - 1)))
		return (NULL);
	i = -1;
	addi = 0;
	while (++i < m->l)
	{
		addi = (i > l ? 1 : 0);
		j = -1;
		while (++j < m->c)
			if (i != l && j != c)
				mr->m[i - addi][j - (j > c ? 1 : 0)] = m->m[i][j];
	}
	return (mr);
}

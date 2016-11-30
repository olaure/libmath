/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaurent <olaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/10 12:18:52 by olaurent          #+#    #+#             */
/*   Updated: 2016/09/10 15:18:25 by olaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

/*
** This duplicates a matrix structure
** It will fail in case of malloc fail
*/

t_mat	*ft_matdup(t_mat *m)
{
	t_mat	*md;
	int		i;
	int		j;

	if (!(md = ft_newmat(m->l, m->c)))
		return (NULL);
	i = -1;
	while (++i < m->l)
	{
		j = -1;
		while (++j < m->c)
			md->m[i][j] = m->m[i][j];
	}
	return (md);
}

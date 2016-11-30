/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newmat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaurent <olaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/10 09:31:56 by olaurent          #+#    #+#             */
/*   Updated: 2016/09/13 15:21:42 by olaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

/*
** This function creates a matrix structure with the dimensions x, y given.
** If the creation fails, it returns NULL.
** The matrix's elements are initialized at 0.
** 1st index is line
** 2nd index is column
*/

t_mat		*ft_newmat(int l, int c)
{
	t_mat	*m;
	int		i;
	int		j;

	if (l < 1 || c < 1)
		return (NULL);
	if (!(m = (t_mat *)malloc(sizeof(t_mat))))
		return (NULL);
	i = -1;
	if (!(m->m = (double **)malloc(sizeof(double *) * l)))
		return (NULL);
	while (++i < l)
	{
		if (!(m->m[i] = (double *)malloc(sizeof(double) * c)))
			return (NULL);
		j = -1;
		while (++j < c)
			m->m[i][j] = 0;
	}
	m->l = l;
	m->c = c;
	return (m);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newvec.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaurent <olaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/10 13:39:02 by olaurent          #+#    #+#             */
/*   Updated: 2016/09/10 14:12:36 by olaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

/*
** This function creates a vector structure with the dimension d given.
** If the creation fails, it returns NULL.
** The vector's elements are initialized at 0.
*/

t_vec		*ft_newvec(int d)
{
	t_vec	*v;
	int		i;

	if (d < 1)
		return (NULL);
	if (!(v = (t_vec *)malloc(sizeof(t_vec))))
		return (NULL);
	if (!(v->v = (double *)malloc(sizeof(double) * d)))
		return (NULL);
	v->d = d;
	i = -1;
	while (++i < d)
		v->v[i] = 0;
	return (v);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaurent <olaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/10 12:44:46 by olaurent          #+#    #+#             */
/*   Updated: 2016/09/10 15:17:30 by olaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

/*
** This copies the src matrix in the dst matrix
** In case of success it returns a pointer to dest
** otherwise, the return value NULL
** It will fail if the two matrixes aren't of the same size
*/

t_mat		*ft_matcpy(t_mat *src, t_mat *dst)
{
	int		i;
	int		j;

	if (src->l != dst->l || src->c != dst->c)
		return (NULL);
	i = -1;
	while (++i < src->l)
	{
		j = -1;
		while (++j < src->c)
			dst->m[i][j] = src->m[i][j];
	}
	return (dst);
}

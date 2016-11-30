/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delmat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaurent <olaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/10 09:40:23 by olaurent          #+#    #+#             */
/*   Updated: 2016/09/10 15:17:09 by olaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

/*
** This frees a matrix structure
*/

void		ft_delmat(t_mat **m)
{
	int		i;

	i = -1;
	while (++i < (*m)->l)
		free((*m)->m[i]);
	free((*m)->m);
	free(*m);
}

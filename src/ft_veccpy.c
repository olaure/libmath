/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_veccpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olaurent <olaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/10 14:00:38 by olaurent          #+#    #+#             */
/*   Updated: 2016/09/10 14:12:51 by olaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

/*
** This copies the src vector in the dst vector
** In case of success it returns a pointer to dest
** otherwise, the return value NULL
** It will fail if the two vectors aren't of the same size
*/

t_vec		*ft_veccpy(t_vec *src, t_vec *dst)
{
	int		i;

	if (src->d != dst->d)
		return (NULL);
	i = -1;
	while (++i < src->d)
		dst->v[i] = src->v[i];
	return (dst);
}
